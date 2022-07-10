#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    bool a[3001]={false};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	a[x]=true;
    }
    for(int i=1;i<3001;i++){
    	if(a[i]==false){
    		cout<<i;
    		return 0;
    	}
    }
    cout<<"3001";
    return 0;
}