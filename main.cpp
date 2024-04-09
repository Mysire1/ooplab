#include <iostream>
#include <string>
#include "student.h"
#include "marks.h"
#include "VLK.h"
using namespace std;

int main() {
    Student id("Kostya Smozhevskykh", 18, 399 , 660878630);
    id.print();

    int MarksArray[] = {5, -3, 3};
    int size = 3;
    Marks mark(MarksArray, size);
    mark.print();

    int x;
    cout << "Write ur VLK status (0/1)";
    cin >> x;
    VLK vl(x);

    return 0;
}


