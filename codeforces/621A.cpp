#include<bits/stdc++.h>
    using namespace std;
     
    int main(){
         long long int n,o=0,s=0,m=10000000000;
         cin>>n;
         long long int a[n];
         for(long long int i=0;i<n;i++){
             cin>>a[i];
             s=s+a[i];
             if(a[i]%2!=0){
                 o++;
                 m=m>a[i]?a[i]:m;
             }
         }
         if(o%2==0) cout<<s;
         else{
             cout<<s-m;
         }
        return 0;
    }