//
// Created by donni on 08.04.2024.
//

#ifndef OOP4_PROH_H
#define OOP4_PROH_H
#include "iostream"
#include "marks.h"

class proh : public Marks {
public:
    proh(int Mass[], int s) : Marks(Mass, s) {}

    bool pass() {
        int countAbove2 = 0;
        int count2 = 0;

        for (int i = 0; i < size; ++i) {
            if (MarksArray[i] >= 2) {
                countAbove2++;
                if (MarksArray[i] == 2) {
                    count2++;
                }
            }
        }

        if (countAbove2 > 2 && count2 < 2) {
            cout << "You pass!" << endl;
            return true;
        } else {
            cout << "You don't pass!" << endl;
            return false;
        }
    }
};


#endif //OOP4_PROH_H
