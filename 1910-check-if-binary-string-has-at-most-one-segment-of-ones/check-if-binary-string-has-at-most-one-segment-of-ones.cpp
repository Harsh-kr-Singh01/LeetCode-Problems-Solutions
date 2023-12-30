class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1){
            if(s[0]=='1') return true;
            else return false;
        }
        int i = 1,turn = 1;
        while(i<s.size()){
            if(s[i] == '1'){
                if(turn == 1) i++;
                else return false;
            }
            else{
                turn = 0;
                i++;
            }
        }
        return true;
    }
};