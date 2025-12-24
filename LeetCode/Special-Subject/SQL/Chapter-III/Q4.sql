# Write your MySQL query statement below
select
    id,
    case
        when tree.id = (select t.id from tree t where t.p_id is null)
        then 'Root'
        when tree.id in (select t.p_id from tree t)
        then 'Inner'
        else 'Leaf'
    end as type
from
    tree
order by id;
