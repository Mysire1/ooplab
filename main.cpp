#include <iostream>
#include <string>
#include "student.h"
#include "marks.h"
#include "VLK.h"
#include "proh.h"
#include "Step.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    Student id("Kostya Smozhevskykh", 18, 399, 660878630);
    id.print();

    int MarksArray[] = {5, 3, 3};
    int size = 3;
    Marks mark(MarksArray, size);
    mark.print();

    Step step1;
    step1.updateScholarship(mark);
    step1.print();
    Step::TypeStep typeStep1;
    typeStep1.determineScholarship(mark);

    proh markProh1(MarksArray, size);
    if (markProh1.pass()) {
        cout << "The student passed." << endl;
    } else {
        cout << "The student did not pass." << endl;
    }

    Student id2("Andriy Kravchuk", 17, 255, 660888760);
    id2.print();

    int MarksArray2[] = {5, 4, 2, 3};
    int size2 = 4;
    Marks mark2(MarksArray2, size2);
    mark2.print();

    Step step2;
    step2.updateScholarship(mark2);
    step2.print();
    Step::TypeStep typeStep2;
    typeStep2.determineScholarship(mark2);

    proh markProh2(MarksArray2, size2);
    if (markProh2.pass()) {
        cout << "The student passed." << endl;
    } else {
        cout << "The student did not pass." << endl;
    }

    int x;
    cout << "Write your VLK status(0/1) ";
    cin >> x;
    VLK v1(x);
    VLK v2(v1);

    return 0;
}