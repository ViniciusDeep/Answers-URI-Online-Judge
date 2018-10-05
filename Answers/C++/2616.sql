------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select customers.id, customers.name from customers 
where customers.id not in (select locations.id_customers from locations);