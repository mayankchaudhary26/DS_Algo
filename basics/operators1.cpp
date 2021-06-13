#include<iostream>

using namespace std;

int main()
{ 
    int a=4, b=5;
// Arithmetic operators
    cout<<"The value of a+b "<<a+b<<endl;
    cout<<"The value of a-b "<<a-b<<endl;
    cout<<"The value of a*b "<<a*b<<endl;
    cout<<"The value of a%b "<<a%b<<endl;
    cout<<"The value of a++ "<<a++<<endl;
    cout<<"The value of a-- "<<a--<<endl;
    cout<<"The value of ++a "<<++a<<endl;
    cout<<"The value of --a "<<--a<<endl;
    cout<<endl;
// // Assignment operators
// int a=3, b=9;
// char d="d";

    // Comparison operators
    cout<<"The comparison operators are:"<<endl;
    cout<<"The value of a==b "<<(a==b)<<endl;
    cout<<"The value of a!=b "<<(a!=b)<<endl;
    cout<<"The value of a>b "<<(a>b)<<endl;
    cout<<"The value of a<b "<<(a<b)<<endl;
    cout<<"The value of a<=b "<<(a<=b)<<endl;
    cout<<"The value of a>=b "<<(a>=b)<<endl;
    cout<<endl;

     // Logical operators
    cout<<"The logical operators are:"<<endl;
    cout<<"The logical and operators ((a==b) && (a<b)); "<<((a==b) && (a<b))<<endl;
    cout<<"The logical or operators ((a==b) || (a<b)); "<<((a==b) || (a<b))<<endl;
    cout<<"The logical not operators (!(a==b)); "<<(!(a==b))<<endl;
    
   
    return 0;
}