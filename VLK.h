//
// Created by donni on 09.04.2024.
//

#ifndef OOP3_VLK_H
#define OOP3_VLK_H
#include "iostream"
using namespace std;

class VLK {
private:
    int medkom;
public:

    VLK() {
        this->medkom = 0;
    }

    VLK(int medst) {
        this->medkom = medst;
        if (medst == 0) {
            cout << "VLK Status = pridatnii" << endl;
        } else if (medst == 1) {
            cout << "VLK Status = nepridatnii" << endl;
        } else {
            cout << "Incorrect value for medst" << endl;
        }
    }

    VLK(const VLK &other) {
        this -> medkom = other.medkom;
        cout << "Thanks for your information" << endl;
    }
};

#endif //OOP3_VLK_H
