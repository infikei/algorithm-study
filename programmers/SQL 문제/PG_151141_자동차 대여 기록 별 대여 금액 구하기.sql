-- Solve 2024-12-30

SELECT H.HISTORY_ID,
    MIN((DATEDIFF(H.END_DATE, H.START_DATE) + 1) * C.DAILY_FEE * (100 - (
        CASE
            WHEN P.DURATION_TYPE = '90일 이상'
            AND DATEDIFF(H.END_DATE, H.START_DATE) + 1 >= 90
            THEN P.DISCOUNT_RATE
            WHEN P.DURATION_TYPE = '30일 이상'
            AND DATEDIFF(H.END_DATE, H.START_DATE) + 1 BETWEEN 30 AND 89
            THEN P.DISCOUNT_RATE
            WHEN P.DURATION_TYPE = '7일 이상'
            AND DATEDIFF(H.END_DATE, H.START_DATE) + 1 BETWEEN 7 AND 29
            THEN P.DISCOUNT_RATE
            ELSE 0
        END
    )) DIV 100) AS FEE
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY H
JOIN CAR_RENTAL_COMPANY_CAR C
ON H.CAR_ID = C.CAR_ID
JOIN CAR_RENTAL_COMPANY_DISCOUNT_PLAN P
ON C.CAR_TYPE = P.CAR_TYPE
WHERE C.CAR_TYPE = '트럭'
GROUP BY 1
ORDER BY 2 DESC, 1 DESC;
