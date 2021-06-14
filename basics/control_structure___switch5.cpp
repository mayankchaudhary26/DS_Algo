#include<iostream>
#include<iomanip>
using namespace std;

int main(){
 int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;

switch (age)
{
case 18:
cout<<"You are 18"<<endl;
    break;

case 22:
cout<<"You are 22"<<endl;
    break;

case 45:
cout<<"You are 45"<<endl;
    break;

case 2:
cout<<"You are 2"<<endl;
    break;

default:
cout<<"Not eligible"<<endl;
    break;}
    cout<<"Thanks";
    return 0;
}    