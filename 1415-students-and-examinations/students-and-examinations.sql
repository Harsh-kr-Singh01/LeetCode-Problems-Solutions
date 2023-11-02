# SELECT A.student_id, A.student_name, B.subject_name, 
# case when Ex.count is null then 0
# else Ex.count
# end as attended_exams
# from Students AS A cross join Subjects AS B
# left join (
#   Select student_id, subject_name, count(*) as count
#   from Examinations
#   group by student_id, subject_name
# ) as Ex
# on B.subject_name = Ex.subject_name and A.student_id = Ex.student_id
# group by A.student_id, A.student_name, B.subject_name
# order by A.student_id, B.subject_name;

SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.student_id) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e ON s.student_id = e.student_id AND sub.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sub.subject_name
ORDER BY s.student_id, sub.subject_name;