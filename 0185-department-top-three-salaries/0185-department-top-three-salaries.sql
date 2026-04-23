SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM (
    SELECT e.* ,
    DENSE_RANK() over (PARTITION BY departmentId ORDER BY salary DESC) rnk
    FROM Employee e
) e
LEFT JOIN Department d ON e.departmentId = d.id
WHERE rnk>=1 AND rnk<=3;