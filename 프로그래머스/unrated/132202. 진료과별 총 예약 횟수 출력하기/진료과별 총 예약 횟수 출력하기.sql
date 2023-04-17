SELECT MCDP_CD as '진료과코드', count (distinct APNT_NO) as '5월예약건수'
from APPOINTMENT 
where APNT_YMD like "2022-05%"
group by MCDP_CD
having (
    count (distinct APNT_NO)
)
order by count (distinct APNT_NO)  asc, MCDP_CD asc;