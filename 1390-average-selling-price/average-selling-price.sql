
SELECT 
t.product_id, CASE WHEN round(sum(price*units)/sum(units), 2) IS NULL THEN 0 ELSE round(sum(price*units)/sum(units), 2) END as average_price
FROM(
SELECT a.product_id,a.price,b.units
FROM Prices AS A
LEFT JOIN UnitsSold AS B
ON A.PRODUCT_ID = B.PRODUCT_ID AND B.PURCHASE_DATE BETWEEN A.START_DATE AND A.END_DATE
#(B.PURCHASE_DATE >= A.START_DATE AND B.PURCHASE_DATE <= A.END_DATE)
GROUP BY A.PRODUCT_ID,B.PURCHASE_DATE
) as t
group by t.product_id
order by t.product_id;
