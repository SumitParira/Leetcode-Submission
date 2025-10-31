# Write your MySQL query statement below
select Stu.student_id,Stu.student_name ,Sub.subject_name,count(Exa.subject_name) as attended_exams from Students stu
CROSS JOIN 
    Subjects sub left join Examinations Exa on Exa.student_id=Stu.student_id and Exa.subject_name = Sub.subject_name
group by stu.student_id , Sub.subject_name,Stu.student_name
order by stu.student_id,Sub.subject_name