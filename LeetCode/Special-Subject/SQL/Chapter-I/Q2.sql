# Write your MySQL query statement below
SELECT 
    b.name as Employee
FROM
    Employee a,Employee b
WHERE 
    a.id = b.managerId 
AND 
    a.salary < b.salary;