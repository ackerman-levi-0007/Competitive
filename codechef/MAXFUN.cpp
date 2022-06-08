#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		int h;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll x=0,y=0,z=0,s=0,k=0;
		x=a[n-1];
		y=a[0];
		for(int i=1;i<n-1;i++){
			z=a[i];
			k=abs(x-y)+abs(y-z)+abs(z-x);
			s=s>k?s:k;
		}
		cout<<s<<"\n";
	}
	return 0;
}