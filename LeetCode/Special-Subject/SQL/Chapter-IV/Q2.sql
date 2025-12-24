# Write your MySQL query statement below
# ´°¿Úº¯Êý
select 
    score,
    dense_rank() over(order by score desc) as 'rank'
from 
    Scores;