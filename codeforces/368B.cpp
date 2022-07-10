#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long int n,m,d=0;
   cin>>n>>m;
   long long int a[n],b[100000],k[n];
   for(long long int i=0;i<100000;i++) b[i]=0;
   for(long long int i=0;i<n;i++){
       cin>>a[i];
       b[a[i]-1]++;
       if(b[a[i]-1]==1) d++;
   }
   for(long long int i=0;i<n;i++){
       b[a[i]-1]--;
       k[i]=d;
       if(b[a[i]-1]==0) d--;
   }
   for(long long int i=0;i<m;i++){
       long long int y;
       cin>>y;
       cout<<k[y-1]<<"\n";
   }
    return 0;
}