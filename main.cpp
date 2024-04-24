#include <iostream>
#include "student.h"
#include "marks.h"
#include "proh.h"
#include "step.h"
#include "vlk.h"
#include "AddStudent.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "Choice option \n 1.Information \n 2.Add student \n 3.Add mark \n 4.Exit \n";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student id("Kostya Smozhevskykh", 18, 399, 660878630, "Software Engineer", 1);
                id.print();
                Step step1;

                int MarksArray[] = {5, 3, 3};
                int size = 3;
                Marks mark(MarksArray, size);
                mark.print();

                step1.updateScholarship(mark);
                step1.print();
                Step::TypeStep typeStep1;
                typeStep1.determineScholarship(mark);

                proh markProh1(MarksArray, size);
                markProh1.pass();

                Student id2("Andriy Kravchuk", 17, 255, 660888760,"Computer Science", 1);
                id2.print();

                int MarksArray2[] = {5, 2, 5, 5};
                int size2 = 4;
                Marks mark2(MarksArray2, size2);
                mark2.print();

                Step step2;
                step2.updateScholarship(mark2);
                step2.print();
                Step::TypeStep typeStep2;
                typeStep2.determineScholarship(mark2);

                proh markProh2(MarksArray2, size2);
                markProh2.pass();

                break;
            }
            case 2: {
                AddStudent newStudent;
                newStudent.addStudent();
                newStudent.print();

                break;
            }
            case 3: {
                Student a("", 0, 0, 0, "", 0);
                AddStudent b;
                a.StaticmethodbindingTEST();
                b.StaticmethodbindingTEST();

                Student *pb = new AddStudent;
                pb->StaticmethodbindingTEST();

                break;
            }

            default:
                cout << "Invalid choice. Please choose again." << endl;
        }

    } while(choice = 4);

    int x;
    cout << "Write your VLK status(0/1): ";
    cin >> x;
    VLK v1(x);
    VLK v2(v1);

    return 0;
}
