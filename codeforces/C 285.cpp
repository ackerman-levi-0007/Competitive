#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long int n,s=0;
    cin >> n;
    long long int a[n];
    for(long long int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(long long int i=0;i<n;i++){
        s=s+abs(i+1-a[i]);
    }
    cout << s;
    return 0;
}