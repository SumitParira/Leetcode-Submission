DELETE FROM Person
WHERE id NOT IN (
    SELECT * FROM (
        SELECT MIN(id) AS id
        FROM Person
        GROUP BY email
    ) AS temp
);
