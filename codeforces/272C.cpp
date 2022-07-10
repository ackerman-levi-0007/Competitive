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
    ll arr[n];
    for(ll i = 0 ; i < n ; i++) cin >> arr[i];
    ll sum=arr[0];
    ll m;
    cin >> m;
    for(ll i = 0 ; i < m ; i++){
        ll a, b;
        cin >> a >> b;
        if (a==1) sum = sum + b;
        else{
            sum = sum > arr[a-1] ? sum : arr[a-1];
            sum = sum + b;
        }
        cout << sum - b << "\n";
    }
    return 0;
}