------------------------------------------------------------
-- Celso "Shaggy" Antonio
------------------------------------------------------------
select movies.id, movies.name from movies
join genres on movies.id_genres = genres.id
join movies_actors on movies.id = movies_actors.id_movies
join actors on movies_actors.id_actors = actors.id
where genres.description = 'Action'
and actors.name in ('Miguel Silva', 'Marcelo Silva');