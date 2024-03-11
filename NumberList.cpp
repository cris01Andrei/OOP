#include<iostream>
using namespace std;

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

void NumberList::Init(){
    this -> count = 0;
}

bool NumberList::Add(int x){
    if(count >= 10){
        return false;
    }

    numbers[count++] = x;

    return true;
}

void NumberList::Sort(){
    int temp = 0, i, j;

    for(i = 0; i < count - 1; i++){
        for(int j = i + 1; j < count; j++){
            if(numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

}

void NumberList::Print(){
    for(int i = 0; i < count - 1; i++){
        cout << numbers[i] <<" ";
    }
    cout << endl;
}
