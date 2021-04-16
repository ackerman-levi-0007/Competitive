#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll check(vector<ll> b,vector<ll> a){
    std::vector<ll> c;
    c.clear();
    ll l=b.size();
    c.push_back(1);
    ll y=0;
    for(ll i=l-2;i>=0;i--){
        if(b[i]==b[i+1]) c[y]++;
        else{
            c.push_back(1);
            y++;
        }
    }
    ll x=a.size();
    ll z=c.size();
    ll h=0,j=0;
    while(j<z && h<x){
        while(c[j]>0 && h<x){
            c[j]=c[j]-a[h];
            if(c[j]>0)h=h+2;
        }
        j++;
        h=h+1;
    }
    ll d=0;
    for(ll i=0;i<z;i++){
        if(c[i]>0){
            d++;
            break;
        }
    }
    if(d==0) return 1;
    else{
        for(ll i=l-1;i>=0;i--) cout<<b[i];
            return 0;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n=s.size();
        std::vector<ll> a,b;
        a.clear();
        b.clear();
        ll m=0,p=0;
        ll y=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0') m++;
            else break;
        }
        a.push_back(1);
        for(ll i=m+1;i<n;i++){
            if(s[i]==s[i-1]) a[y]++;
            else{
                a.push_back(1);
                y++;
            }
        }
        //if(s[0]=='0') a.pop_front();
        for(ll i=0;i<n;i++) if(s[i]=='0') p++;
        if(p==0){
            cout<<"0\n";
            continue;
        }
        b.push_back(1);
        //for(int i=0;i<a.size();i++) cout<<a[i];
       // cout<<"\n";
        while(ll o=1){
            ll d=check(b,a);
            if(d==0){
                cout<<"\n";
                break;
            }
            else{
                ll l=b.size();
                b[0]++;
                for(ll g=0;g<l;g++){
                    if(b[g]<=1) break;
                    else{
                        b[g]=0;
                        if(g==l-1) b.push_back(1);
                        else b[g+1]++;
                    }
                }
            }
        }
    }
    return 0;
}