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
    int static count;
    string name;
    int age;
    int RoomNumber;
    int number;

public:
    Student(string stname, int stage, int roomN, int telnumber) : name(stname), age(stage), RoomNumber(roomN), number(telnumber) {
        count++;
    }

    void print() ;
};


#endif //OOP3_STUDENT_H
