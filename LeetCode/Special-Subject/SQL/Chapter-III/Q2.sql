# Write your MySQL query statement below
select
    s.student_id,
    s.student_name,
    b.subject_name,
    ifnull(a.attend_exams,0) as attended_exams
from
    students s
cross join
    subjects b
    left join 
    (
        select
            student_id,
            subject_name,
            count(*) as attend_exams
        from
            examinations 
        group by    
            student_id,
            subject_name
    ) as a on s.student_id = a.student_id and b.subject_name = a.subject_name
order by    
    s.student_id,
    b.subject_name;