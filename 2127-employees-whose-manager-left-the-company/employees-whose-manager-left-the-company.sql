
SELECT EMPLOYEE_ID 
FROM EMPLOYEES 
WHERE MANAGER_ID NOT IN(

    SELECT DISTINCT EMPLOYEE_ID FROM EMPLOYEES
    
) AND SALARY < 30000
ORDER BY EMPLOYEE_ID;