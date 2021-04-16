#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin >> n;
    ll x=1000000;
    for(ll i=x ; i < x+n ;i++){
        cout<<i<<" ";
    }
    return 0;
}