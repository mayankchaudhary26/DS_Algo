// Array is a collection of items of similar type stored in contiguous memory locations
#include<iostream>
using namespace std;

int main(){
    // array example
    
    int marks[] = {1,2,3,4,5,6,7,8,9};

    int mathmarks[]= {11,22,33,44,55,66};

    cout<<"value at marks[2] is "<<marks[2]<<endl;
    mathmarks[3] = 77;
    cout<<"replacement value : "<<mathmarks[3]<<endl;

/*             --------------for loop--------------
    for (size_t i = 0; i < 2; i++)
    {
        cout<<"the value of marks is "<<mathmarks[i]<<endl;
    }
*/          
    int i = 0;
    while (i<5)
    {
        // cout<<"the value of marks is "<<marks[i]<<endl;
        cout<<"while loop value for marks at "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    //------------- Pointer------------
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;


    return 0; 
}
 




