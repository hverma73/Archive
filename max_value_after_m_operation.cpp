#include<bits/stdc++.h> 
using namespace std; 
int findMax(int n, int a[], int b[], int k[], int m) 
{ 
	int arr[n]; 
	memset(arr, 0, sizeof(arr)); 
	for (int i = 0; i< m; i++) 
	{ 
		int lowerbound = a[i]; 
		int upperbound = b[i]; 

		for (int j=lowerbound; j<=upperbound; j++) 
			arr[j] += k[i]; 
	} 

	int res = INT_MIN; 
	for (int i=0; i<n; i++) 
		res = max(res, arr[i]); 

	return res; 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n,m,a[3],b[3],k[3];
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>a[i]>>b[i]>>k[i];
		}
		cout<<findMax(n,a,b,k,m)<<endl;
	}
	return 0; 
} 

