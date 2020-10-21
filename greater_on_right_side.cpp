#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,temp=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int j=0;j<n;j++){
			int res = INT_MIN;
			for(int k=j+1;k<=n;k++){
				res = max(res,arr[k]);
			}
			if(res!=NULL){
				temp=res;
				arr[j]=temp;
			}
			else{
				arr[j]=-1;
			}
		}
		for(int z=0;z<n;z++){
			cout<<arr[z]<<" ";
		}
	}
	return 0;
}
