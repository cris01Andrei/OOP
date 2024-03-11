#include<iostream>
#include "NumberList.cpp"

class NumberList{
    private:
    int numbers[10];
    int count; 
    public:
    void Init();
    bool Add(int x);
    void Sort();
    void Print();

};
