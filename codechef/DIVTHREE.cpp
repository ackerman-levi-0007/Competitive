#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;
    cin>>t;
    for(ll z=0;z<t;z++){
        ll n,k,d,s=0,x;
        cin>>n>>k>>d;
        for(ll i=0;i<n;i++){
            cin>>x;
            s=s+x;
        }
        s=s/k;
        s=min(s,d);
        cout<<s<<"\n";
    }
    return 0;
}