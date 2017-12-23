#include "Student.h"

Student::Student(const std::string &name,
                 const int birth_year,
                 const int birth_month,
                 const int birth_day,
                 std::string &&password,
                 const std::string &neptun):

                 Person(name, birth_year, birth_month, birth_day, password),

                 neptun_code(neptun) {}

double Student::average(std::function<double(decltype(courses))> &&f) {
    return f(courses);
}

void Student::add_course(const std::string &course_name, const size_t credit) {
    courses.emplace(course_name, std::make_pair(std::make_pair(course_name, credit), 0));
}

void Student::give_mark(const std::string &course_name, size_t mark) {
    auto result = courses.find(course_name);
    if (result == courses.end())
        return;

    result->second.second = mark;
}

