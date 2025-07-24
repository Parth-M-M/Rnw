select * from smartphones_cleaned_v6 ;
select model , price 	from smartphones_cleaned_v6 ;
select battery_capacity as 'mah' , price from smartphones_cleaned_v6 ;
select * from smartphones_cleaned_v6 where price  between 10000 and 50000 ; 
select * from smartphones_cleaned_v6 where brand_name = 'samsung' order by price desc limit 3 ;
select brand_name , count(*) as 
total_phone  from smartphones_cleaned_v6 group by brand_name ;