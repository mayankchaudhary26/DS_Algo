#include<iostream>
#include<iomanip>
using namespace std;

int main()
// constants in C++
{
    const int a = 5;
    cout<<"the value of a is "<<a<<endl;
    
 int x=5,y=55,z=555;
  cout<<"the value of x is "<<x<<endl; 
  cout<<"the value of y is "<<y<<endl;
  cout<<"the value of z is "<<z<<endl;

// setw() use:
  cout<<"the value of x is "<<setw(4)<<x<<endl; 
  cout<<"the value of y is "<<setw(4)<<y<<endl;
  cout<<"the value of z is "<<setw(4)<<z<<endl;

//   cppreference.com for operator precedence
    return 0;
}