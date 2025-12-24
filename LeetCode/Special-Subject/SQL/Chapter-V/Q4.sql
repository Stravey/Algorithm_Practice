# Write your MySQL query statement below
with t1 as 
(
    select
        *,
        id - row_number() over(order by id) as rk
    from
        stadium
    where
        people >= 100
)

select 
    id,
    visit_date,
    people
from    
    t1
where 
    rk in 
    (
        select 
            rk
        from
            t1
        group by
            rk
        having 
            count(rk) >= 3
    )