# Write your MySQL query statement below
select
    round(sum(tiv_2016),2) tiv_2016
from
(
    select
        tiv_2016,
        count(*) over(partition by tiv_2015) cn_2015,
        count(*) over(partition by lat,lon) cn_l
    from
        insurance
) as t
where
    cn_2015 > 1 and cn_l = 1;