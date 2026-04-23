SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary FROM(
    SELECT e.*,
       DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY Salary DESC) AS rnk
    FROM Employee e
) e
LEFT JOIN Department d ON e.departmentId = d.id
WHERE rnk = 1;