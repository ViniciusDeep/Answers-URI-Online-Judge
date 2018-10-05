------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select movies.id, movies.name from movies
join genres on movies.id_genres = genres.id
where genres.description = 'Action';