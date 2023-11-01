SELECT A.student_id, A.student_name, B.subject_name, 
case when Ex.count is null then 0
else Ex.count
end as attended_exams
from Students AS A cross join Subjects AS B
left join (
  Select student_id, subject_name, count(*) as count
  from Examinations
  group by student_id, subject_name
) as Ex
on B.subject_name = Ex.subject_name and A.student_id = Ex.student_id
group by A.student_id, A.student_name, B.subject_name
order by A.student_id, B.subject_name;