#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int m=0;
    for(int i=0;i<=n;i=i+a){
        for(int j=0;j<=n;j=j+b){
            if(i+j<=n){
                int x=n-(i+j);
                if(x%c==0){
                    int s=(i/a)+(j/b)+(x/c);
                    m=max(m,s);
                }
            }
            else break;
        }
    }
    cout << m;
    return 0;
}