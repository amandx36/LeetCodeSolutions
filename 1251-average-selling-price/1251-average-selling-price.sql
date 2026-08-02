SELECT
    pric.product_id,
    ROUND(
        IFNULL(
            SUM(pric.price * sol.units) / SUM(sol.units),
            0
        ),
        2
    ) AS average_price
FROM Prices AS pric
LEFT JOIN UnitsSold AS sol
    ON pric.product_id = sol.product_id
   AND sol.purchase_date BETWEEN pric.start_date AND pric.end_date
GROUP BY pric.product_id;