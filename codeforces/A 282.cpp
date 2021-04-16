#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
   int n,x=0;
   cin>>n;
   string s;
   for(int i=0;i<n;i++){
   		cin>>s;
   		if(s[1]=='+')x++;
   		else x--;
   		s.clear(); 
   }
   cout<<x;
   return 0;
}