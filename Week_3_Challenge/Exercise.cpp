#include"Header.h"
#include <iostream>
using std::cout;
using std::endl;

Pair::Pair(int a, int b) {
    pa = new int;
    *pa = a;
    pb = new int;
    *pb = b;

}
Pair::Pair(const Pair& other) {
    pa = new int;
    *pa = *other.pa;
    pb = new int;
    *pb = *other.pb;
}
Pair::~Pair() {
    delete pa;
    delete pb;
}