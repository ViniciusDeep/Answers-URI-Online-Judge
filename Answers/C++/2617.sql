------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select products.name, providers.name from providers
join products on providers.id = products.id_providers 
where providers.name = 'Ajax SA';