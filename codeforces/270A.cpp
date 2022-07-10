#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int t,a;
	cin>>t;
	while(t--){
		cin>>a;
		if( 360 % (180-a) == 0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}