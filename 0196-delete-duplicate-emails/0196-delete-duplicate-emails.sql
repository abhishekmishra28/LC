DELETE FROM Person 
WHERE id IN (
    SELECT id FROM (
        SELECT id,
        ROW_NUMBER() OVER (PARTITION BY email ORDER BY id ASC) rnk
        FROM Person
    ) t
    WHERE rnk>1
);