//
// Created by donni on 24.04.2024.
//

#ifndef OOP_LAB2_ADDSTUDENT_H
#define OOP_LAB2_ADDSTUDENT_H
#include "iostream"
#include "student.h"
using namespace std;

class AddStudent : public Student {

public:
    AddStudent() : Student("", 0, 0, 0, "", 0) {}

    void addStudent() override {
        Student::addStudent();
        cout << "Room: ";
        cin >> RoomNumber;
        cout << "Telephone number (9 num): ";
        cin >> number;
        cout << "Name of your faculty: ";
        cin >> facultyName;
        cout << "Your faculty grade: ";
        cin >> facultyGrade;
    }

};


#endif //OOP_LAB2_ADDSTUDENT_H
