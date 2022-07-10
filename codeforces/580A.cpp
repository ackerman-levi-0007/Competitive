#include<bits/stdc++.h>
    using namespace std;
     
    int main(){
         int n,x=1,s=0,d=0;
         cin>>n;
         long long int a[n];
         cin>>a[0];
         for(int i=1;i<n;i++){
             cin>>a[i];
             if(a[i]>=a[i-1]){
                 x++;
             }
             else{
                 s=max(s,x);
                 x=1;
                 d++;
             }
         }
        s=max(s,x);
        cout<<s;
        return 0;
    }