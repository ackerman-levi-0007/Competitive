#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    long long int n=s.size();
    long long int a[n];
    a[0]=0;
    for(long long int i=1;i<n;i++){
        if(s[i-1]==s[i]) a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    long long int t;
    cin >> t;
    for(long long int j=0;j<t;j++){
        long long int x,y;
        cin >> x >> y;
        cout << a[y-1]-a[x-1] <<"\n";
    }
    return 0;
}