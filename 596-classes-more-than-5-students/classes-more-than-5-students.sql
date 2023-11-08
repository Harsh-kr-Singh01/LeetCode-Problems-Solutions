# Write your MySQL query statement below
SELECT CLASS
FROM Courses
GROUP BY CLASS
HAVING COUNT(student) >= 5
ORDER BY CLASS;