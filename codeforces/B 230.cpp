#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;
 
    ll i = 5,w=2;
 
    while(i*i <= n){
        if(n%i == 0)return false;
 
        i += w;
        w = 6 - w;
    }
 
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin >> n;
    	ll x=sqrt(n);
    	if(x*x==n && n!=1){
    		if(isprime(x)) cout<<"YES\n";
    		else cout<<"NO\n";
    	}
    	else cout<<"NO\n";
    }
    return 0;
}