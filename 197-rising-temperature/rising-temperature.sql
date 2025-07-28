-- Write your PostgreSQL query statement below
SELECT w1.id FROM Weather AS w1
JOIN Weather AS w2
ON w1.recordDate - (INTERVAL '1 days') = w2.recordDate
WHERE w1.temperature > w2.temperature;