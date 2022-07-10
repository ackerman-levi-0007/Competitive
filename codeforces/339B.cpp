#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	ll n,m,x,a;
	cin>>n>>m>>a;
	ll s=a-1;
	for(ll i=1;i<m;i++){
		x=a;
		cin>>a;
		if(a>x) s=s+a-x;
		if(a<x) s=s+n-x+a;
	}
	cout<<s;
	return 0;
}