#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    int n,x;
    cin>>n;
    int ne=0,no=0;
    for(int i=0;i<n;i++){
    	cin>>x;
    	if(x%2==0) ne++;
    	else no++;
    }
    if(no%2==0) cout<<ne;
    else cout<<no;
    return 0;
}