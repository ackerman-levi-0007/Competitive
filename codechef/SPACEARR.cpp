#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x;
	    int b[200001]={0};
	    int z=0;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        b[x]++;
	    }
	    for(int i=1;i<=n;i++){
	        if(b[i]==0){
	            z=0;
	            break;
	        }
	        if(b[i]>1){
	            b[i+1]+=b[i]-1;
	            z=z+b[i]-1;
	        }
	    }
	    if(z%2!=0) cout<<"First"<<"\n";
	    else cout<<"Second"<<"\n";
	}
	return 0;
}