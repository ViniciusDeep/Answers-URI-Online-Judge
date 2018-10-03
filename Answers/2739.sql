------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
SELECT l.name, CAST(EXTRACT(DAY FROM l.payday) AS int) AS "day" FROM loan l;