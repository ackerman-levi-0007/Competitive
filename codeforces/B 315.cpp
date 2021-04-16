#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n , m , sum = 0;
    cin >> n >> m;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++) cin >> arr[i];
    for(ll i = 0 ; i < m ; i++){
        ll a;
        cin >> a;
        if(a==1){
            ll b, c;
            cin >> b >> c;
            arr[b-1] = c - sum;
        }
        if(a==2){
            ll b;
            cin >> b;
            sum += b;
        }
        if(a==3){
            ll b;
            cin >> b;
            cout << arr[b-1] + sum << "\n"; 
        }
    }
    return 0;
}