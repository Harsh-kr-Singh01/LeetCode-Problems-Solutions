# SELECT CASE WHEN COUNT(NUM) = 0 THEN NULL ELSE NUM END AS NUM
# FROM
# (
#   SELECT NUM
#   FROM MyNumbers
#   GROUP BY NUM
#   HAVING COUNT(NUM) = 1
#   ORDER BY NUM DESC
#   LIMIT 1
# ) AS TEMP;

SELECT 
IF(COUNT(num) = 1, num, null) AS num 
FROM MyNumbers 
GROUP BY num 
ORDER BY num DESC 
LIMIT 1;