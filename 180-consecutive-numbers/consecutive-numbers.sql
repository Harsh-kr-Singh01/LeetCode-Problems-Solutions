# Write your MySQL query statement below
SELECT DISTINCT A.NUM AS ConsecutiveNums
FROM Logs AS A
JOIN Logs AS B
ON A.ID-B.ID = 1 AND A.NUM = B.NUM
JOIN Logs AS C
ON A.ID-C.ID = 2 AND B.ID-C.ID = 1 AND A.NUM = C.NUM
ORDER BY ConsecutiveNums;
