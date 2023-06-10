
SELECT  A.product_code, sum(B.sales_amount * A.price) AS sales
FROM product A
JOIN offline_sale B ON A.product_id = B.product_id
group by 1
ORDER BY sales DESC, A.product_code;