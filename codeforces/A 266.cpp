#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
   int n,x=0;
   cin>>n;
   string s;
   cin>>s;
   for(int i=1;i<n;i++){
   	if(s[i-1]==s[i]) x++;
   }
   cout<<x;
   return 0;
}