------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
SELECT REGEXP_REPLACE(natural_person.cpf,
        '([[:digit:]]{3})([[:digit:]]{3})([[:digit:]]{3})([[:digit:]]{2})',
        '\1.\2.\3-\4') AS CPF
FROM natural_person
join customers on natural_person.id_customers = customers.id;