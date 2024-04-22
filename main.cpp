#include <iostream>
#include "student.h"
#include "marks.h"
#include "proh.h"
#include "step.h"
#include "vlk.h"
using namespace std;


int main() {
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

    Student id2 = id;
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

    Student id3("Olekssii Petyhachnyi", 17, 322, 637855632, "Software Engineer", 1);
    id3.print();
    id2 = move(id3);
    id2.print();

    int x;
    cout << "Write your VLK status(0/1) ";
    cin >> x;
    VLK v1(x);
    VLK v2(v1);

    return 0;
}
