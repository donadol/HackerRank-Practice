select SUM(city.population)
from city, country 
where city.countrycode = country.code and country.continent = 'asia'
