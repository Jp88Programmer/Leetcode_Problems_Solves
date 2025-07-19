-- Write your PostgreSQL query statement below
SELECT firstName, lastName, city, state 
FROM Person AS person LEFT JOIN Address AS address
ON person.personId = address.personId;