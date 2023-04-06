-- 코드를 입력하세요
SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE NAME like "%el%" and animal_type = 'Dog'
ORDER BY 2