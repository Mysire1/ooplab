//
// Created by donni on 08.04.2024.
//

#ifndef OOP4_STUDENT_H
#define OOP4_STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    static int count;
    string name;
    int age;
    int RoomNumber;
    int number;
    string facultyName;
    int facultyGrade;

public:
    Student(string stname, int stage, int roomN, int telnumber, string facName, int facGrade)
            : name(stname), age(stage), RoomNumber(roomN), number(telnumber), facultyName(facName), facultyGrade(facGrade) {
        count++;
    }
    Student& operator=(const Student& other) {
        if (this != &other) {
            this->name = other.name;
            this->age = other.age;
            this->RoomNumber = other.RoomNumber;
            this->number = other.number;
            this->facultyName = other.facultyName;
            this->facultyGrade = other.facultyGrade;
        }
        return *this;
    }

    Student(const Student& other) : name(other.name), age(other.age), RoomNumber(other.RoomNumber),number(other.number), facultyName(other.facultyName),facultyGrade(other.facultyGrade) {
        cout << "COPY CONSTRUCTOR" << endl;
    }

    Student(Student&& other) noexcept: name(std::move(other.name)), age(other.age), RoomNumber(other.RoomNumber),number(other.number), facultyName(std::move(other.facultyName)),facultyGrade(other.facultyGrade) {
        cout << "MOVE CONSTRUCTOR" << endl;
    }


    void print();
};


#endif //OOP4_STUDENT_H
