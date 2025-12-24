# Write your MySQL query statement below
(
    SELECT
        name AS results 
    FROM 
        Users u 
    JOIN MovieRating m ON u.user_id = m.user_id
    GROUP BY
        m.user_id
    ORDER BY
        COUNT(*) DESC,name ASC
    LIMIT 1 
)
UNION ALL
(
    SELECT
        title
    FROM
        Movies mo
    JOIN MovieRating m ON mo.movie_id = m.movie_id AND created_at LIKE '2020-02%'
    GROUP BY
        mo.movie_id
    ORDER BY
        avg(rating) DESC,title ASC
    LIMIT 1
)
