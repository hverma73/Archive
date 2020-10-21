#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int cnt=0;
		char c;
		cin>>c;
		for(int i=0;i<str.length();i++){
			if(c==str[i]){
				cnt++;
			}
		}
		cout<<cnt<<" ";
	}
	return 0;
}
