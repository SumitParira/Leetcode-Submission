# Write your MySQL query statement below
select d.name as Department , e.name as Employee , e.salary as Salary
from Employee as e
left join  Department as d on e.departmentId=d.id
where e.salary = (
    Select max(salary) from Employee 
    Where departmentId=e.departmentId
)