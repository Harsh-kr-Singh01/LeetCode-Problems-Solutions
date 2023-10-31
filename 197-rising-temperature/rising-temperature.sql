# Write your MySQL query statement below
SELECT A.ID
FROM Weather AS A
JOIN Weather AS B
ON DATEDIFF(A.recordDate,B.recordDate) = 1
WHERE A.TEMPERATURE > B.TEMPERATURE;
# A aage chal rha hai yaha B se