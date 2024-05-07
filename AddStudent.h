//
// Created by donni on 24.04.2024.
//

#include <iostream>
#include <fstream>
#include "student.h"
#include "marks.h"
#include "proh.h"

using namespace std;

class AddStudent : public Student {
private:
    Marks studentMarks;
    proh studentProh;
public:
    AddStudent() : Student("", 0, 0, 0, "", 0), studentMarks(nullptr, 0), studentProh(nullptr, 0) {}

    string toString() const {
        string result;
        result += "Name: " + name + "\n";
        result += "Age: " + to_string(age) + "\n";
        result += "Room: " + to_string(RoomNumber) + "\n";
        result += "Telephone number: " + to_string(number) + "\n";
        result += "Faculty Name: " + facultyName + "\n";
        result += "Faculty Grade: " + to_string(facultyGrade) + "\n";

        result += "Marks: ";
        result += studentMarks.toString();

        return result;
    }

    void readStudentData(ifstream& inFile) {
        getline(inFile, name);
        inFile >> age;
        inFile >> RoomNumber;
        inFile >> number;
        inFile.ignore();
        getline(inFile, facultyName);
        inFile >> facultyGrade;
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

        cout << "Enter number of marks: ";
        int numMarks;
        cin >> numMarks;

        for (int i = 0; i < numMarks; ++i) {
            int mark;
            cout << "Enter mark " << (i + 1) << ": ";
            cin >> mark;
            studentMarks.addMark(mark);
        }
        if (studentProh.pass()) {
            cout << "You pass!" << endl;
        } else {
            cout << "You don't pass!" << endl;
        }
    }
};
