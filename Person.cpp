#include "Person.h"

Person::Person(const std::string &name,
               const int birth_year,
               const int birth_month,
               const int birth_day,
               const std::string &password):

               name(name),
               birth_year(birth_year),
               birth_month(birth_month),
               birth_day(birth_day),
               password(password)
{}

bool Person::validate_password(std::string_view pw) const {
    return pw == password;
}