# Write your MySQL query statement below
select Department,Employee,Salary from (select d.name as Department , e.name as Employee , salary as Salary , DENSE_RANK() OVER (
            PARTITION BY d.name
            ORDER BY salary DESC
        ) AS drnk from 
 Employee e
Left join  Department d ON d.id=e.departmentId) t where drnk<=3;
