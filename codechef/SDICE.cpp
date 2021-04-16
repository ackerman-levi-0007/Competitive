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
        ll n;
        cin >> n;
        ll s=0;
        ll f=n%4;
        ll o=(n-1)/4;
        if(f==0) s=60;
        else if(f==1) s=20;
        else if(f==2) s=36;
        else if(f==3) s=51;
        if(o!=0){
            s=s+(44*o);
            if(f==1) s=s+12;
            if(f==2) s=s+8;
            if(f==3) s=s+4;
        }
        cout << s << "\n";
    }
    return 0;
}