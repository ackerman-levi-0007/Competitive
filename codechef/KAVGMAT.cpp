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
        int n, m, k;
        cin >> n >> m >> k;
        ll a[n+1][m+1];
        ll o=0;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
                a[i][j]-=k;
            }
        }

        if(a[n][m]<0){
            cout << "0\n";
            continue;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=2;j<=m;j++) a[i][j]+=a[i][j-1];
        }
        for(int j=1;j<=m;j++){
            for(int i=2;i<=n;i++) a[i][j]+=a[i-1][j];
        }

        ll s=min(n,m);
        ll sum=0;
        
        for(int l=1;l<=s;l++){
            int f=m;
            for(int i=1;i<=n-l+1;i++){
                int x;
                if(f+l-1>m) {
                    x=m-l+1;
                    f=x;
                }
                else x=f;
                sum=a[i+l-1][x+l-1]-a[i-1][x+l-1]-a[i+l-1][x-1]+a[i-1][x-1];
                if(sum<0) continue;
                for(int j=1;j<=f;j++){
                    sum=a[i+l-1][j+l-1]-a[i-1][j+l-1]-a[i+l-1][j-1]+a[i-1][j-1];  
                    if(sum>=0){
                        //cout << i <<" "<<j<<" ";
                        o += (n-i-l+2)*(f-j+1);
                        //cout << (n-i-l+2)*(f-j+1) << " " << l <<" "<< sum <<"\n";
                        f=j-1;
                        break;
                    }
                }
            }
        }
        cout << o <<"\n";
    }
    return 0;
}