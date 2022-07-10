#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<2*(n-i);j++) cout<<" ";
		for(int j=0;j<i;j++) cout<<" "<<j;
		int j=i;
		while(j>=0){cout<<" "<<j; j--;}
		cout<<"\n";
	}
	for(int i=0;i<=n;i++) cout<<i<<" ";
	for(int i=n-1;i>0;i--) cout<<i<<" ";
	cout<<"0"<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<2*i;j++) cout<<" ";
		for(int j=0;j<n-i;j++) cout<<" "<<j;
		int j=n-i;
		while(j>=0){cout<<" "<<j; j--;}
		cout<<"\n";
	}
	return 0;
}