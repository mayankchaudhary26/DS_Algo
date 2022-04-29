//Given an array arr[] of size n. For every i from n-1 output max(a[0] a[1] a[2] a[3]...a[n])

#include<bits/stdc++.h>
#include<climits>
#include<iostream>
using namespace std;


int main(){
	
	int mx = -4444;
	int n;
	cout<<"enter the n value: "<<endl;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];

	}

	for(int i=0; i<n; i++){
		mx = max(mx,arr[i]);
		cout<<mx<<endl;
	}
	return 0;

	}
