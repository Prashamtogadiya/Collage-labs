--Part – A
--1. Retrieve a unique genre of songs.
Select distinct genre from Songs

--2. Find top 2 albums released before 2010.
select top 2 * from Albums
where Release_year < 2010

--3. Insert Data into the Songs Table. (1245, ‘Zaroor’, 2.55, ‘Feel good’, 1005)
insert into Songs values(1245,'Zaroor', 2.55,'Feel good', 1005)

--4. Change the Genre of the song ‘Zaroor’ to ‘Happy’
Update Songs 
set Genre = 'Happy'
where Song_title = 'Zaroor'

--5. Delete an Artist ‘Ed Sheeran’
delete from Artists
where Artist_name = 'Ed Shreen'

select * from Artists

--6. Add a New Column for Rating in Songs Table. [Ratings decimal(3,2)]
alter table Songs
add Rating decimal(3,2)

--7. Retrieve songs whose title starts with 'S'.
select * from Songs
where Song_title like 'S%'

--8. Retrieve all songs whose title contains 'Everybody'.
select * from Songs
where Song_title like '%Everybody%'

--9. Display Artist Name in Uppercase.
select upper(Artist_name) from Artists

--10. Find the Square Root of the Duration of a Song ‘Good Luck’
select sqrt(duration) from Songs
where Song_title = 'Good Luck'

--11. Find Current Date.
select GETDATE()

--12. Find the number of albums for each artist.
select Artist_id, count(Album_title) from Albums
group by Artist_id

--13. Retrieve the Album_id which has more than 5 songs in it.
select Album_id, count(Song_id) from Songs
group by Album_id
having count(Song_id) > 5

--14. Retrieve all songs from the album 'Album1'. (using Subquery)
select * from Songs
where Album_id = (select Album_id from Albums where Album_title = 'Album1')

--15. Retrieve all albums name from the artist ‘Aparshakti Khurana’ (using Subquery)
select Album_title from Albums
where Artist_id = (select Artist_id from Artists where Artist_name = 'Aparshakti Khurana')

--16. Retrieve all the song titles with its album title.
select Songs.Song_title, Albums.Album_title from Songs
join Albums on
Albums.Album_id = Songs.Album_id

--17. Find all the songs which are released in 2020.
select Songs.Song_title, Release_year from Songs
join Albums on
Albums.Album_id = Songs.Album_id
where Release_year = 2020

--18. Create a view called ‘Fav_Songs’ from the songs table having songs with song_id 101-105.
create view Fav_Songs as
Select *
from Songs
where Song_id between 101 and 105


--19. Update a song name to ‘Jannat’ of song having song_id 101 in Fav_Songs view.
update Fav_Songs
set Song_title = 'Jannat'
where Song_id = 101

--20. Find all artists who have released an album in 2020.
select Artist_name from Artists join Albums
on 

--21. Retrieve all songs by Shreya Ghoshal and order them by duration. 