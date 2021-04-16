#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   long long int n,k,l,max=0;
   cin >>n;
   int a[24][60];
   for(int i=0;i<24;i++){
       for(int j=0;j<60;j++) a[i][j]=0;
   }
   for(long long int i=0;i<n;i++){
       cin>>k>>l;
       a[k][l]++;
   }
   for(int i=0;i<24;i++){
       for(int j=0;j<60;j++){
           max=max>a[i][j]?max:a[i][j];
       }
   }
   cout<< max;
   return 0;
}