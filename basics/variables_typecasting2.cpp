#include<iostream>

using namespace std;

int a = 45;
int main(){
// ********** Build in Data types**********
    int a=5;
    cout<<"Value of global variable is " <<::a <<endl;


//******** Float, double and long double********
float d=34.4f;
long double e = 34.4l;

cout<<"value of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"value of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"value of 34.4l is "<<sizeof(34.4l)<<endl;

// ************Reference variable*************
float x=455;
float & y= x;
cout<<"value of y will be of x: "<<y<<endl;

// **********Type casting**********
int m = 44,n = 45.5;
cout<<"The value of m is "<<(float)m<<endl;
cout<<"The value of n is "<<(int)n<<endl;

    return 0;
}