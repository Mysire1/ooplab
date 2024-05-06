#include <iostream>
#include "student.h"
#include "marks.h"
#include "proh.h"
#include "step.h"
#include "vlk.h"
#include "AddStudent.h"
#include "memory"
#include <fstream>
using namespace std;

int main() {
    int choice, choice1;
    cout << "Who are you? \n 1.Teacher \n 2.Student" << endl;
    cin >> choice1;
    if (choice1 == 1) {
        int attemps = 3;
        do {
            int inputpass, teacherpass = 123;
            cout << "Type teacher password: ";
            cin >> inputpass;
            if (inputpass == teacherpass) {
                do {
                    cout << "Choice option \n 1.Information \n 2.Add student \n 3.Add mark \n 4.Exit \n";
                    cin >> choice;

                    switch (choice) {
                        case 1: {
                            ofstream out;
                            out.open("info.txt");

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

                            Student id2("Andriy Kravchuk", 17, 255, 660888760, "Computer Science", 1);
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

                            out.close();
                            cout << "File has been written" << endl;
                            break;
                        }
                        case 2: {
                            ofstream out;
                            out.open("info.txt");
                            AddStudent newStudent;
                            //newStudent.pay();
                            newStudent.addStudent();
                            newStudent.print();

                            out.close();
                            break;
                        }
                        case 3: {
                            ofstream out;
                            out.open("info.txt");

                            int MarksArray[] = {5, 3, 3};
                            int size = 3;
                            Marks mark(MarksArray, size);

                            int markw;
                            cout << "Write mark you want to add(0-5): ";
                            cin >> markw;
                            mark.addMark(markw);

                            mark.print();
                            out.close();
                            break;
                        }
                        case 4: {
                            attemps = 0;
                            cout << "Bye!";
                            break;
                        }
                        default:
                            cout << "Invalid choice. Please choose again." << endl;
                    }
                } while (choice != 4);
            } else {
                attemps--;
                cout << "You have only " << attemps << " .Try again!" << endl;
            }
        } while (attemps > 0);
    }
    if (choice1 == 2) {
        do {
            cout << "Choose option \n 1.Information \n 2.Exit" << endl;
            cin >> choice;
            switch (choice) {
                case 1: {
                    ofstream out;
                    out.open("info.txt");

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

                    Student id2("Andriy Kravchuk", 17, 255, 660888760, "Computer Science", 1);
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

                    out.close();
                    break;
                }
                default:
                    cout << "Infalid choice. Please choose again." << endl;
            }
        } while (choice != 2);
    }
    return 0;
}