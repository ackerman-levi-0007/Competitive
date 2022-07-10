#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
   int r,c,x=0,y=0,d=0;
   cin>>r>>c;
   int a[r][c];
   for(int i=0;i<r;i++){
   	d=0;
   	for(int j=0;j<c;j++){
   		char c;
   		cin>>c;
   		if(c=='.') a[i][j]=0;
   		else{
   			d++;
   			a[i][j]=1;
   		}
   	}
   	if(d==0) x++;
   }

   for(int j=0;j<c;j++){
   	d=0;
   	for(int i=0;i<r;i++){
   		if(a[i][j]==1){
   			d++;
   			break;
   		}
   	}
   	if(d==0) y++;
   }
   cout<<(x*c)+(y*r)-(x*y);
   return 0;
}