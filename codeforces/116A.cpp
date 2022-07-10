#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int a,b;
	int m=0,k=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		k=k+b-a;
		m=max(k,m);
	}
	cout<<m;
	return 0;
}