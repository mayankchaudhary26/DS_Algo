#include<bits/stdc++.h>
#include<climits>
#include<iostream>
using namespace std;

int binarySearch(int n, int key, int a[]){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	} return -1;
}

int main(){
	int n;
	cout<<"enter the value :"<<endl;
	cin>>n;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int key;
	cout<<"enter the key :"<<endl;
	cin>>key;

	cout<<binarySearch(n,key,a);


}

