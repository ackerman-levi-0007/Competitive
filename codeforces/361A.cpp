#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
   int x,y;
   cin>>x>>y;
   for(int i=0;i<x;i++){
   	for(int j=0;j<x;j++){
   		if(i==j) cout<<y<<" ";
   		else cout<<"0 ";
   	}
   	cout<<"\n";
   }
   return 0;
}