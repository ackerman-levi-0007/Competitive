#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll x, y, n;
    cin >> x >> y >> n;
    ll s=n%6,k;
    if(s==0) k = (x-y);
    else if(s==1) k = x;
    else if(s==2) k = y;
    else if(s==3)k = y - x;
    else if(s==4) k = -1*x;
    else if(s==5) k = -1*y;

    while(k<0) k=1000000007+k;
    k=k%1000000007;
    cout<<k;  
    return 0;
}