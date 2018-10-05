------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select products.name, categories.name from products
join categories on products.id_categories = categories.id
where (products.amount > 100
and products.id_categories in (1,2,3,6,9));