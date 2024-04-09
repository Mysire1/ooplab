//
// Created by donni on 29.02.2024.
//

#ifndef OOP_LAB2_VLK_H
#define OOP_LAB2_VLK_H
#include "iostream"
#include "string"
using namespace std;

class VLK {
private:
    int medkom;

public:
    VLK() : medkom(0) {
        cout << endl << "PEREGRZYZ";
    }

    VLK(int medst)  {
        this -> medkom;
        cout << endl;
        if (medst == 0) {
            cout << "VLK Status = pridantii" << endl;
        }
        else if (medst == 1) {
            cout << "VLK Status = nepridatnii" << endl;
        }
        else {
            cout << "Incorrect value for medst" << endl;
        }
    }
};


#endif //OOP_LAB2_VLK_H
