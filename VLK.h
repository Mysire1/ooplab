//
// Created by donni on 09.04.2024.
//

#ifndef OOP3_VLK_H
#define OOP3_VLK_H
#include "iostream"
#include "Interface.h"
using namespace std;

class VLK : public Interface{
protected:
    int medkom{};
public:
    virtual void printinter(const Interface &obj) const override {
        cout << "From class VLK" << endl;
    }
    void printOne(VLK &obj) {
        cout << "TEST?";
    }

    VLK(int value) : medkom{value}{
    }

    void print (int status){
        cout << "STATUS: " << status << endl;
    }

    VLK(const VLK &other) {
        this -> medkom = other.medkom;
        cout << "Thanks for your information" << endl;
    }

};

#endif //OOP3_VLK_H
