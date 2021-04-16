#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		if(n<=10) cout<<s<<"\n";
		else cout<<s[0]<<n-2<<s[n-1]<<"\n";
	}
	return 0;
}