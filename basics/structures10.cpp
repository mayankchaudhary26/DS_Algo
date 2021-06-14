#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int id;
    char gender;
    float salary;
} ep;

int main(){
    ep mayank;
    
    // struct employee piyush;

    mayank.gender = 'm';
    mayank.id = 57;
    mayank.salary = 600000;
    cout<<"The value is of salary is "<<mayank.salary<<endl;
    cout<<"The value is id is "<<mayank.id<<endl;
    cout<<"The gender is  "<<mayank.gender<<endl;

    
        
    
    return 0;
}