#include <iostream>
#include "human.h"
using namespace std;

int main() {
    Human *hw1, *hw2;
    hw1 = new Human("Hyunwoo Lee");
    hw1->print();
    hw1->setAge(40);
    hw1->print();

    hw2 = new Human("Hyunwoo Lee");
    hw2->print();
    hw2->setAge(22);
    hw2->print();
}
