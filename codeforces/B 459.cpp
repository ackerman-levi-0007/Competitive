#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long int n,m=1,s=1,p=0;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    if(a[0]==a[n-1]){
        for(int i=1;i<n;i++) p=p+i;
        cout<<"0 "<<p;
    }
    else{
        for(int i=1;i<n;i++){
        if(a[i]==a[0]) m++;
        else break;
        }
        for(int i=1;i<n;i++){
            if(a[n-1-i]==a[n-1]) s++;
            else break;
        }
        cout<<a[n-1]-a[0]<<" "<<s*m;
    }
    return 0;
}