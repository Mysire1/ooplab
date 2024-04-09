//
// Created by donni on 29.02.2024.
//

#ifndef OOP_LAB2_STUDENT_H
#define OOP_LAB2_STUDENT_H
#include <iostream>
#include <string>
using namespace std;


    class Student {
    private:
        string name;
        int age;
        int RoomNumber;
        int number;

    public:
        Student(string stname, int stage, int roomN, int telnumber) : name(stname), age(stage), RoomNumber(roomN), number(telnumber)  {}

        void print() {
            cout << "Student name = " << name << endl;
            cout << "Student age = " << age << endl;
            cout << "Student number = " << number << endl;
            cout << "Student room = " << RoomNumber << endl;
        }
    };



#endif //OOP_LAB2_STUDENT_H
