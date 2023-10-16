class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        vector<int> temp;
        temp.push_back(1);
        v.push_back(temp);

        if(rowIndex == 0) return v[0];

        for(int i = 1; i <= rowIndex; i++){
            temp.clear();
            int size = i+1, t = size;
            int j = 0;
            while(t--){
                if(j == 0 || j == size-1){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(v[i-1][j-1] + v[i-1][j]);
                }
                j++;
            }
            v.push_back(temp);
        }
        return v[rowIndex];
    }
};