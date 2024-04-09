#include <iostream>
#include <string>
#include "student.h"
#include "marks.h"
#include "VLK.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    Student id("Kostya Smozhevskykh", 18, 399, 660878630);
    id.print();

    int MarksArray[] = {5, 3, 3};
    int size = 3;
    Marks mark(MarksArray, size);
    mark.print();

    Student id2("Andriy Kravchuk", 17, 255, 660888760);
    id2.print();

    int MarksArray2[] = {5, 4, 2, 3};
    int size2 = 4;
    Marks mark2(MarksArray2, size2);
    mark2.print();

    int x;
    cout << "Write your VLK status(0/1) ";
    cin >> x;
    VLK v1(x);
    VLK v2(v1);

    return 0;
}