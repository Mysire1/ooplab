//
// Created by donni on 27.04.2024.
//

#ifndef OOP_LAB2_STUDYFEE_H
#define OOP_LAB2_STUDYFEE_H
#include "iostream"
using namespace std;

class StudyFee {
public:
    virtual int pay() const = 0;
    virtual ~StudyFee() {};
};


#endif //OOP_LAB2_STUDYFEE_H
