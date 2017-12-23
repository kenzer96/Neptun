#ifndef NEPTUN_STUDENT_H
#define NEPTUN_STUDENT_H

#include <unordered_map>
#include <map>
#include <bits/unordered_map.h>
#include "Person.h"
#include <functional>

using subject = std::pair<std::string, size_t>;
class Student : public Person{
    using course = std::pair<subject, size_t>;

    const std::string neptun_code;
    std::unordered_map<std::string, course> courses;

public:
    Student (const std::string&, int, int, int, std::string&&, const std::string&);

    double average (std::function<double(decltype(courses))>&&);

    void add_course (const std::string&, size_t);

    void give_mark(const std::string&, size_t);
};


#endif //NEPTUN_STUDENT_H
