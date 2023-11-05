# SELECT E1.NAME
# FROM Employee as E1
# WHERE E1.ID IN (
#     SELECT E2.managerId
#     FROM Employee as E2
#     GROUP BY E2.managerId
#     HAVING COUNT(E2.managerId) >= 5
# )

SELECT E1.NAME
FROM Employee as E1
JOIN Employee as E2
ON E1.ID = E2.managerId
GROUP BY E2.managerId
HAVING COUNT(E2.managerId) >= 5;