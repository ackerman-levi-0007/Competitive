#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin >> n >> m;
    char a[n+2][m+2];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++) cin >> a[i][j];
    }
    int k=0;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		if(a[i][j]=='W'){
    			if(a[i+1][j]=='P' || a[i-1][j]=='P' || a[i][j+1]=='P' || a[i][j-1]=='P') k++;
    		}
    	}
    }
    cout<<k;
    return 0;
}