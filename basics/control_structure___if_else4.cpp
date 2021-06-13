#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    /*
    if(age<18){
        cout<<"You cannot join our group";
    }

    else if(age==18){
        cout<<"You can send a request for acceptance"<<endl;

    }
    else{
        cout<<"You can join us :)"; 
    */
    
    if((age<18)&&(age>=1)){
        cout<<"You cannot join our group, kidddddd"<<endl;
    }

    else if(age==18){
        cout<<"You can send a request for acceptance"<<endl;
    }
    else if(age<=0){
        cout<<"You are not born yet :)";     
    }
    else if((age>18)&&(age<50)){
        cout<<"Get in dawg";
    }
    else{ 
        cout<<"invalid";}
    return 0;
}