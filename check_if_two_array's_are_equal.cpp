#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x,y;
		cin>>x>>y;
		int a=0,b=0;
		for(int i=0;i<n;i++){
			if(x==arr[i]){
				a=i;
				break;
			}
		}
		for(int i=0;i<n;i++){
			if(y==arr[i]){
				b=i;
				break;
			}
		}
		if(a!=0 || b!=0){
			cout<<y-x;
		}
		else{
			cout<<"-1";	
		}
		cout<<endl;
	}
	return 0;
}
