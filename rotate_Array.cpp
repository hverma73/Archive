#include <bits/stdc++.h> 
using namespace std; 

void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[0], i; 
	for (i = 0; i < n - 1; i++) 
		arr[i] = arr[i + 1]; 

	arr[i] = temp; 
} 

void leftRotate(int arr[], int d, int n) 
{ 
	for (int i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
}  

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n,d; 
		cin>>n>>d;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		} 
		leftRotate(arr, d, n); 
		for(int j=0;j<n;j++){
			cout<<arr[j]<<" ";
		}		
	}
	return 0; 
} 

