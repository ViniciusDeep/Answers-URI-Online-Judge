------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
SELECT 'Approved: ' || s.name AS "name", s.grade 
FROM students s
WHERE s.grade >= 7.0
ORDER BY s.grade DESC;