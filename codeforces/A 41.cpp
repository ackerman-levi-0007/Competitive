#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	string a,b;
	cin>>a>>b;
	int n=a.size();
	int m=b.size();
	if(n==m){
		for(int i=0;i<n;i++){
			if(a[i]!=b[n-1-i]){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}