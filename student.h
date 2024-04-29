//
// Created by donni on 08.04.2024.
//

#ifndef OOP4_STUDENT_H
#define OOP4_STUDENT_H
#include <iostream>
#include <string>
#include "StudyFee.h"
using namespace std;

class Student : public StudyFee {
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

    int pay() const override{
        int paym;
        cout << "Did you pay for UNI? \n 1.Yes \n 2.No " << endl;
        cin >> paym;
        if (paym == 1) {
            cout << "You pay 36800 for year" << endl;
        }
        if (paym == 2) {
            cout << "You dont pay for UNI" << endl;
        } else {
            cout << "Choose between 1 or 2" << endl;
        }
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
