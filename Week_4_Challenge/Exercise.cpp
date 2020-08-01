#include<iostream>
#include"Header.h"
using namespace std;
Pair::Pair(int a, int b)
{
    x = a;
    y = b;
}


sumPair::sumPair(int a, int b) :Pair(a, b)
{
    sum = a + b;
}