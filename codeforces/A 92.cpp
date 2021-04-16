#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n,m;
	cin>>n>>m;
	ll s=0;
	for(int i=1;i<=n;i++) s+=i;
	m=m%s;
	for(int i=1;i<=n;i++){
		if(m>=i) m=m-i;
		else break;
	}
	cout<<m;
	return 0;
}