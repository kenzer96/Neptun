#ifndef NEPTUN_PERSON_H
#define NEPTUN_PERSON_H

#include <string>

class Person {
    std::string password;

    const std::string name;

    const int birth_year;
    const int birth_month;
	const int birth_day;

    //json-ben érdemes tárolni

public:
    Person(const std::string&, int, int, int, const std::string&);

    bool validate_password(std::string_view) const ;
};


#endif //NEPTUN_PERSON_H
