//
// Created by donni on 09.04.2024.
//

#ifndef OOP3_STUDENT_H
#define OOP3_STUDENT_H
#include "iostream"
#include "string"
using namespace std;

class Student {
private:
    string name;
    int age;
    int RoomNumber;
    int number;

public:
    Student(string stname, int stage, int roomN, int telnumber) : name(stname), age(stage), RoomNumber(roomN), number(telnumber) {
    }

    void print() {
        cout << "------------------------------" << endl;
        cout << "Student name = " << name << endl;
        cout << "Student age = " << age << endl;
        cout << "Student number = " << number << endl;
        cout << "Student room = " << RoomNumber << endl;
        cout << "------------------------------" << endl;
    }
};


#endif //OOP3_STUDENT_H
