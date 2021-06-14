#include<iostream>
using namespace std;

// ========Union========
typedef union money
{
    int rice;
    char gender;
    float dollar;

} um;

int main(){
    um m1;
    
    m1.rice = 33;
    // m1.gender = 'm';
    // ========Can use only one at a time========
    cout<<m1.rice<<endl;



    enum meal{ a,b,c,d,e,f,g,h,i,j,k,l,m } ;
    meal m2 = l;
    cout<<"enum value is "<<m2;

    return 0;
}