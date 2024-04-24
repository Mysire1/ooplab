//
// Created by donni on 08.04.2024.
//

#ifndef OOP4_STUDENT_H
#define OOP4_STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
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

    void StaticmethodbindingTEST () {
        cout << "BASE CLASS" <<endl;
    }

    virtual void addStudent() {
        cout << "Write new data about student! " << endl;
        cout << "Name: " ;
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }

    virtual void print();
};


#endif //OOP4_STUDENT_H
