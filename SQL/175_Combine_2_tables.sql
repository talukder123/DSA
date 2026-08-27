SELECT firstName, lastName, city, state
from Person
left join address
on person.personId = address.personId