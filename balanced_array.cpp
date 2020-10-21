#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,left=0,right=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int j=0;j<n/2;j++){
//			cout<<arr[j]<<" ";
			left=left+arr[j];
		}
		for(int k=n/2;k<=n;k++){
			right=right+arr[k];
		}
		if(left>right){
			int add=left-right;
			cout<<add;
		}
		else{
			int sum=right-left;
			cout<<sum;
		}
	}
	return 0;
}
