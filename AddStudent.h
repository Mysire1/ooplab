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
        cout << "Write new data about student! " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Room: ";
        cin >> RoomNumber;
        cout << "Telephone number (9 num): ";
        cin >> number;
        cout << "Name of your faculty: ";
        cin >> facultyName;
        cout << "Your faculty grade: ";
        cin >> facultyGrade;

        ofstream outFile("info.txt",ios::app);
        if (outFile.is_open()) {
            cout << "====================================";
            outFile << "Name: " << name << endl;
            outFile << "Age: " << age << endl;
            outFile << "Room: " << RoomNumber << endl;
            outFile << "Telephone number: " << number << endl;
            outFile << "Faculty Name: " << facultyName << endl;
            outFile << "Faculty Grade: " << facultyGrade << endl;
            cout << "====================================";
            outFile.close();
        }
        else {
            cout << "File dont open ";
        }
    }

};


#endif //OOP_LAB2_ADDSTUDENT_H