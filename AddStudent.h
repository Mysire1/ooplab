//
// Created by donni on 24.04.2024.
//

#include <iostream>
#include <fstream>
#include "student.h"

using namespace std;

class AddStudent : public Student {

public:
    AddStudent() : Student("", 0, 0, 0, "", 0) {}

    string toString() const {
        string result;
        result += "Name: " + name + "\n";
        result += "Age: " + to_string(age) + "\n";
        result += "Room: " + to_string(RoomNumber) + "\n";
        result += "Telephone number: " + to_string(number) + "\n";
        result += "Faculty Name: " + facultyName + "\n";
        result += "Faculty Grade: " + to_string(facultyGrade) + "\n";
        return result;
    }

    void addStudent() {
        cout << "Write new data about student! " << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Room: ";
        cin >> RoomNumber;
        cout << "Telephone number (9 num): ";
        cin >> number;
        cout << "Name of your faculty: ";
        cin.ignore();
        getline(cin, facultyName);
        cout << "Your faculty grade: ";
        cin >> facultyGrade;
    }
};
