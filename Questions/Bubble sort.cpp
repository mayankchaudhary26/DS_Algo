#include<bits/stdc++.h>
#include<climits>
#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"enter the value"<<endl;
	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int count = 1;
	while(count<n){
		for(int i=0; i<n-count; i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		} count++;
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	} cout<<endl;

}

