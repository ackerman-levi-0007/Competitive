    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
         int n,m,s=0,x=1;
         cin>>n>>m;
         int a[n];
         for(int i=0;i<n;i++){
             cin>>a[i];
             s=s+a[i];
             if(s>m){
                 x++;
                 s=a[i];
             }
         }
         cout<<x;
        return 0;
    }