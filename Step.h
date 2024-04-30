//
// Created by donni on 08.04.2024.
//

#ifndef OOP4_STEP_H
#define OOP4_STEP_H
#include "iostream"
#include "marks.h"
#include "Interface.h"
using namespace std;

class Step {
private:
    int step;
public:
    Step() : step(1000) {
    }

    Step operator+(const Step& step1) const {
        Step result;
        result.step = step + step1.step;
        return result;
    }

    void updateScholarship(const Marks& marks) {
        for (int i = 0; i < marks.size; ++i) {
            switch (marks.MarksArray[i]) {
                case 5:
                    step += 150;
                    break;
                case 4:
                    step += 100;
                    break;
                case 3:
                    step += 50;
                    break;
                default:
                    break;
            }
        }
    }

    void print() {
        cout << "Your scholarship is = " << step << endl;
    }

    class TypeStep {
    public:
        void determineScholarship(const Marks& marks) {
            int count = 0;

            for (int i = 0; i < marks.size; ++i) {
                if (marks.MarksArray[i] == 5) {
                    count++;
                }
            }

            if (count >= 3) {
                cout << "This student is an excellent student." << endl;
            } else {
                cout << "This student is an ordinary student." << endl;
            }
        }
    };
};


#endif //OOP4_STEP_H