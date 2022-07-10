#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n<=2){
    	cout<<n;
    	return 0;
    }
    ll m=0,x=0;
    for(int i=2;i<n;i++){
    	if(a[i]==a[i-1]+a[i-2]){
    		x++;
    	}
    	else{
    		m=max(m,x);
    		x=0;
    	}
    }
    m=max(m,x);
    if(m==0) cout<<"2";
    else cout<<m+2;
    return 0;
}