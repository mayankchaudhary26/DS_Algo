#include<iostream>
using namespace std;

// Function prototypes

int sum(int a, int b);
void g(void);

int main(){
    int num1, num2;
    cout<<"first value is "<<endl;
    cin>>num1;

    cout<<"second value is "<<endl;
    cin>>num2;

    cout<<"answer is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}
  
void g(){
    cout<<"\nThis is the answer";

}
