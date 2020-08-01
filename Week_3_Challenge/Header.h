#pragma once
class Pair {
public:
    int* pa, * pb;
    Pair(int a, int b);
    Pair(const Pair&);
    ~Pair();
    
};