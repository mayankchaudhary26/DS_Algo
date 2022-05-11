Input Format

Input will contain four integers -  , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6


Answer - 

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int maxi = max(a,(max(b,(max(c,d)))));
    return maxi;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
