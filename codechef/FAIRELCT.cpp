#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;
    cin>>t;
    for(ll z=0;z<t;z++){
        ll n,m,sn=0,sm=0,x,k=0;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sn=sn+a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            sm=sm+b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        if(sn>sm) cout<<"0";
        else{
            x=min(n,m);
            for(ll i=0;i<x;i++){
                sn=sn-a[i]+b[m-1-i];
                sm=sm-b[m-1-i]+a[i];
                k++;
                if(sn>sm) break;
            }
            if(sn>sm) cout<<k;
            else cout<<"-1";
        }
        if(z!=t-1) cout<<"\n";
    }
    return 0;
}