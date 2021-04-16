#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b) cout<<"YES\n";
        else if(b==c) cout<<"YES\n";
        else if(a==c) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}