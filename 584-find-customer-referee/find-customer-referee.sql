-- Write your PostgreSQL query statement below
SELECT name FROM Customer
WHERE (referee_id IS NOT NULL AND referee_id != 2) OR (referee_id IS NULL);