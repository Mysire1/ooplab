//
// Created by donni on 29.02.2024.
//

#include "student.h"

int Student::count = 0;

void Student::print () {
    cout << "------------------------------" << endl;
    cout << "Student " << count << endl;
    cout << "Student name = " << name << endl;
    cout << "Student age = " << age << endl;
    cout << "Student number = " << number << endl;
    cout << "Student room = " << RoomNumber << endl;
    cout << "------------------------------";
}