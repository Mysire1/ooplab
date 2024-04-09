//
// Created by donni on 29.02.2024.
//

#ifndef OOP_LAB2_MARKS_H
#define OOP_LAB2_MARKS_H
#include "iostream"
#include "string"
using namespace std;

class Marks {
private:
    int* MarksArray;
    int size;

public:
    Marks(int Mass[], int s) : size(s) {
        MarksArray = new int[size];
        for (int i = 0; i < size; ++i) {
            MarksArray[i] = Mass[i];
        }
    }

    ~Marks() {
        delete[] MarksArray;
    }

    void print() {
        cout << endl << "Student Marks = ";
        for (int i = 0; i < size; ++i) {
            cout << MarksArray[i] << " ";
        }
        cout << endl;
    }
};


#endif //OOP_LAB2_MARKS_H
