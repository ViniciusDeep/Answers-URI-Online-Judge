------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select customers.name, orders.id from customers
join orders on customers.id = orders.id_customers
where EXTRACT(MONTH from orders.orders_date) <= 6;