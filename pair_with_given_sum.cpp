#include<bits/stdc++.h>
using namespace std;
#define max 100001
void sum(int arr[],int brr[],int n,int m,int x){
	int hash[max]={0};
	for(int i=0;i<n;i++){
		hash[i]=arr[i];
	}
	int count=0;
	for(int i=0;i<m;i++){
		if(hash[i]+brr[i]==x){
			cout<<hash[i]<<" "<<brr[i]<<endl;
			count++;
		}
	}
	if(count=0){
		cout<<"-1"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x;
		cin>>n>>m>>x;
		int arr[n],brr[m];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<m;i++){
			cin>>brr[i];
		}
		sum(arr,brr,n,m,x);
	}
	return 0;
}
