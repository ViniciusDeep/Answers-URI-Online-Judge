------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select products.name, providers.name from products
join providers on products.id_providers = providers.id
where products.id_categories = 6;