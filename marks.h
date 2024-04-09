//
// Created by donni on 09.04.2024.
//

#ifndef OOP3_MARKS_H
#define OOP3_MARKS_H
#include "iostream"
using namespace std;

class Marks {
public:
    int* MarksArray;
    int size;

    Marks(int Mass[], int s) : size(s) {
        MarksArray = new int[size];
        for (int i = 0; i < size; ++i) {
            MarksArray[i] = Mass[i];
        }
    }

    Marks(Marks&& other) noexcept {
        this->MarksArray = other.MarksArray;
        this->size = other.size;
        other.MarksArray = nullptr;
        other.size = 0;
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


#endif //OOP3_MARKS_H
