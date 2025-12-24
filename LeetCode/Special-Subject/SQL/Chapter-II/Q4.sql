# Write your MySQL query statement below
select
    activity_date as day,
    count(distinct user_id) as active_users
from
    activity
group by
    day
having 
    datediff('2019-7-27',day) 
    between 0 and 29;