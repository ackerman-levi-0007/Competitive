#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long int n,k,s=0,min=0,w=1;
    cin>>n>>k;
    long long int a[n];
    for(long long int i=0;i<k;i++){
        cin>>a[i];
        s=s+a[i];
    }
    min=s;
    for(long long int i=k;i<n;i++){
        cin>>a[i];
        s=s+a[i]-a[i-k];
        if(min>s){
            w=i-k+2;
            min=s;
        }
    }
    cout<<w;
    return 0;
}