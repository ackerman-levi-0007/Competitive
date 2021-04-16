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
        int n, k;
        cin >> n >> k;
        string s;
        cin >>s;
        int c=0,m=0;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                 m=max(m,c);
                c=0;
            }
            else{
               c++;
            }
        }
        m=max(m,c);
        if(m>=k) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}