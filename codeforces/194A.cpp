#include<bits/stdc++.h>
    using namespace std;
     
    int main(){
         int n,k,x=0;
         cin>>n>>k;
         x=(k<n*3)?(n*3)-k:0;
         cout<<x;
        return 0;
    }