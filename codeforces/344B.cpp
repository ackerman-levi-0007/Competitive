#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll a ,b ,c;
    cin >> a >> b >> c;
    ll x, y, z, s;
    s = a+b+c;
    if(s%2!=0) cout << "Impossible";
    else{
        s=s/2;
        x=s-c;
        y=s-a;
        z=s-b;
        if(x<0 || y<0 || z<0) cout << "Impossible";
        else cout << x << " " << y << " " << z;
    }
    return 0;
}