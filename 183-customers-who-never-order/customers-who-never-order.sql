-- Write your PostgreSQL query statement below
SELECT c.name AS Customers FROM Customers AS c
LEFT JOIN Orders AS o ON c.id = o.customerId
WHERE o.id IS NULL;