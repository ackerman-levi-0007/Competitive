#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a >> b >> c;
    std::vector<ll> arr;
    arr.clear();
    for(int i=1;i<=81;i++){
        ll x=pow(i,a);
        x=x*b;
        x=x+c;
        if(x<0) continue;
        if(x>1000000000) continue;
        ll m=x,s=0;
        while(m!=0){
            s=s+m%10;
            m=m/10;
        }
        if(s==i) arr.push_back(x); 
    }
    int n=arr.size();
    if(n==0) cout<<"0";
    else{
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
    return 0;
}