# Write your MySQL query statement below

select empId.unique_id , empTab.name from 
Employees as empTab 
   left  join 
EmployeeUNI as empId
on empId.id = empTab.id ;