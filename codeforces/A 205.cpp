#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	ll n,x;
	cin>>n;
	cin>>x;
	ll m=x,j=0,k=1;
	for(ll i=2;i<=n;i++){
		cin>>x;
		if(x==m) j++;
		if(x<m){
			j=0;
			m=x;
			k=i;
		}
	}
	if(j==0) cout<<k;
	else cout<<"Still Rozdil";
	return 0;
}