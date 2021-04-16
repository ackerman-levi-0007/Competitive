#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n,k;
	cin>>n>>k;
	int m=n;
	for(int i=0;i<k;i++){
		cout<<m<<" ";
		m--;
	}
	for(int i=1;i<=n-k;i++) cout<<i<<" ";
	return 0;
}