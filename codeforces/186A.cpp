#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    string a,b;
        cin >> a >> b;
        long long int x,y,s=0,n,m;
        x=a.size();
        y=b.size();
        if(x==y){
            for(long long int i=0;i<x;i++){
                if(a[i]!=b[i]){
                    s++;
                    if(s==1) n=i;
                    if(s==2) m=i;
                }
                if(s==3) break;
            }
            if(s==2&&a[n]==b[m]&&a[m]==b[n]) cout<<"YES";
            else cout <<"NO";
        }
        else cout <<"NO";
        return 0;
    return 0;
}