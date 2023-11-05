SELECT E1.NAME
FROM Employee as E1
WHERE E1.ID IN (
    SELECT E2.managerId
    FROM Employee as E2
    GROUP BY E2.managerId
    HAVING COUNT(E2.managerId) >= 5
)
