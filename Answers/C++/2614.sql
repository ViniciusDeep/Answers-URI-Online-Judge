------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select customers.name, rentals.rentals_date from customers
join rentals on customers.id = rentals.id_customers
where EXTRACT(MONTH FROM rentals.rentals_date) = 09;