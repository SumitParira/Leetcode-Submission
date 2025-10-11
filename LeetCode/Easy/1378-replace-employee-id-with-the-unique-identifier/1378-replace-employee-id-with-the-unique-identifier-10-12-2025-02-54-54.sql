SELECT 
    en.unique_id AS unique_id,
    e.name AS name
FROM Employees AS e
LEFT JOIN EmployeeUNI AS en
    ON en.id = e.id;
