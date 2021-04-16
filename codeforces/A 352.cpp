#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int n0=0,n5=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x==5) n5++;
		else n0++;
	}
	if(n0==0) cout<<"-1";
	else{
		n5=n5-((n5)%9);
		if(n5==0) cout<<"0";
		else{
			for(int i=0;i<n5;i++) cout<<"5";
			for(int i=0;i<n0;i++) cout<<"0";
		}
	}
	return 0;
}