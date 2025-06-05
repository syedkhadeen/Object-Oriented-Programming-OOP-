#include <iostream>
using namespace std;

struct Name {
    string firstName, lastName;
};

class DateOfBirth {
public:
    int day, month, year;

public:
    DateOfBirth(int d = 1, int m = 1, int y = 2022) : day(d), month(m), year(y) {
        if (month < 1 || month > 12) {
            month = 1;
        }
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
            day = 1;
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
            day = 1;
        } else if (month == 2) {
            bool leapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
            if (leapYear && (day < 1 || day > 29)) {
                day = 1;
            } else if (!leapYear && (day < 1 || day > 28)) {
                day = 1;
            }
        }
        if (year < 1900 || year > 2022) {
            year = 2022;
        }
    }

    friend void printDate(DateOfBirth &date);
};

void printDate(DateOfBirth &date) {
    cout << date.day << "/" << date.month << "/" << date.year;
}

class Person {
private:
    Name personName;
    char gender;
    DateOfBirth dateOfBirth;

public:
    Person(string fname = "", string lname = "", char gen = 'U', DateOfBirth dob = DateOfBirth())
        : personName({fname, lname}), gender(gen), dateOfBirth(dob) {}

    friend void printPerson(Person &person);
};

void printPerson(Person &person) {
    cout << "Name: " << person.personName.firstName << " " << person.personName.lastName << endl;
    cout << "Gender: " << person.gender << endl;
    cout << "Date of Birth: ";
    printDate(person.dateOfBirth);
    cout << endl;
}

int main() {
    Person person("John", "Doe", 'M', DateOfBirth(2, 3, 1990));
    printPerson(person);

    return 0;
}
