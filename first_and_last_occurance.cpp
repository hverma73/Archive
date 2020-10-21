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
		int k;
		cin>>k;
		vector <int> v;
		for(int i=0;i<n;i++){
			if(k==arr[i]){
				v.push_back(i);
			}
		}
		cout<<v.front()<<" "<<v.back();
		cout<<endl;
	}
	return 0;
}
