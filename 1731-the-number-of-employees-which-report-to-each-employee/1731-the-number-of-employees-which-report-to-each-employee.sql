# Write your MySQL query statement below
select e1.employee_id,e1.name,count(distinct e.employee_id) as reports_count,round(avg(e.age),0) as average_age
from Employees e
join Employees e1
on e1.employee_id=e.reports_to
group by e1.employee_id;
