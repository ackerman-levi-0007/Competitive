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
        string s;
        cin >> s;
        int n=s.size();
        int d=0;
        for(int i=0;i<n;i++){
            if(s[i]!='a') {
                d++;
                break;
            }
        }
        if(d==0) cout<<"NO\n";
        else{
            cout<<"YES\n";
            int f=-1;
            for(int i=0;i<=n/2;i++){
                if(s[i]!=s[n-1-i]){
                    if(s[i]=='a') f=i;
                    else f=n-1-i;
                    break;
                }
            }
            if(f==-1) cout<<"a"<<s<<"\n";
            else{
                for(int i=0;i<n;i++){
                    if(i==f) cout<<"a";
                    cout<<s[i];
                }
                cout<<"\n";
            }
        }

    }
    return 0;
}