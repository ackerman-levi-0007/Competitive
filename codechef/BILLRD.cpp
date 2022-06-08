#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;
    cin>>t;
    for(ll z=0;z<t;z++){
        ll n,k,x,y,x0,x1,y0,y1;
        cin>>n>>k>>x>>y;
        if(x==y) cout<<n<<" "<<n;
        else if(x>y){
            x0=n;
            y0=n-x+y;
            x1=x-y;
            y1=0;
        }
        else{
            x0=n-y+x;
            y0=n;
            x1=0;
            y1=y-x;
        }
        k=k%4;
        if(x!=y){
            if(k==1) cout<<x0<<" "<<y0;
            else if(k==2) cout<<y0<<" "<<x0;
            else if(k==3) cout<<y1<<" "<<x1;
            else cout<<x1<<" "<<y1;
        }
        cout<<"\n";
    }
    return 0;
}