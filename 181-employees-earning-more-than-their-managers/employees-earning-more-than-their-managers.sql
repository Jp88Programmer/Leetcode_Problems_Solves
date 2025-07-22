# Write your MySQL query statement below
SELECT e1.name AS Employee FROM Employee As e1
INNER JOIN Employee AS e2 on e1.managerId = e2.id 
WHERE e1.salary > e2.salary;
