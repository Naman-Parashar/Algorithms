#include<bits/stdc++.h> 
using namespace std; 

void preprocess(int arr[], int n, int temp[]) { 
	for (int i = 0; i<n; i++) 
		temp[i] = temp[i + n] = arr[i]; 
} 

void leftRotate(int arr[], int n, int k, int temp[]) { 
	int start = k % n; 

	for (int i = start; i < start + n; i++) 
		cout<<temp[i]; 
} 

int main(){ 
	int arr[] = {1, 3, 5, 7, 9}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	int temp[2*n]; 
	preprocess(arr, n, temp); 

	int k = 2; 
	leftRotate(arr, n, k, temp); 

	k = 3; 
	leftRotate(arr, n, k, temp); 

	k = 4; 
	leftRotate(arr, n, k, temp); 

	return 0; 
} 
