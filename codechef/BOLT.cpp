#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        float a, b , c, d;
        cin >> a>> b>>c >>d;
        float s;
        s=a*b*c*d;
        s=100/s;
        s=s+0.005;
        s=s*100;
        if(s<958) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}