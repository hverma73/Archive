#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,temp=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cin>>k;
		sort(arr,arr+n);
//		for(int j=0;j<k;j++){
//			temp=arr[j];
//		}
		temp=arr[k-1];
		cout<<temp<<endl;
	}
	return 0;
}
