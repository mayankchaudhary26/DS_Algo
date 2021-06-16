#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not work
void swap(int a, int b){  //temp  a  b
    int temp = a;         //4    4  5
    a = b;                //4    5  5
    b = temp;             //4    5  4
}

void swapPointer(int* a, int* b){
    int temp = *a;         //4    4  5
    *a = *b;               //4    5  5
    *b = temp;             //4    5  4
}


void swapPointerVar(int &a, int &b){
    int temp = a;         //4    4  5
    a = b;                //4    5  5
    b = temp;             //4    5  4
}

int main(){
    int a=4, b=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b );
    cout<<"The value of a is "<<a<<", The value of b is "<<b<<endl;
    // swap(a,b);                this will not work

    // swapPointer(&a,&b);
    // cout<<"The value of a is "<<a<<", The value of b is "<<b<<endl;

    swapPointerVar(a,b);
    cout<<"The value of a is "<<a<<", The value of b is "<<b<<endl;

    return 0;
}