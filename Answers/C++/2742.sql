------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
SELECT li.name, round((li.omega * 1.618), 3) AS "Fator N" FROM life_registry li 
JOIN dimensions di ON li.dimensions_id = di.id
WHERE (di.name = 'C875' or di.name = 'C774') and li.name like 'Richard%'
ORDER BY li.omega ASC;