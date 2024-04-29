//
// Created by donni on 29.04.2024.
//

#ifndef OOP_LAB2_INTERFACE_H
#define OOP_LAB2_INTERFACE_H
using namespace std;

class Interface {
public:
    virtual void printinter(const Interface &obj) const =0;
    virtual ~Interface(){};
};


#endif //OOP_LAB2_INTERFACE_H
