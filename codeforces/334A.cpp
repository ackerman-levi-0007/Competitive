#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n/2;j++){
    		cout<<x<<" "<<(n*n)-x+1<<" ";
    		x++;
    	}
    	cout<<"\n";
    }
    return 0;
}