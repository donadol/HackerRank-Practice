SELECT DISTINCT CITY FROM STATION
WHERE not REGEXP_LIKE(CITY,'*[aeiou]$','i');