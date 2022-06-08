#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int z=0;
	    for(int i=1;i<n;i++){
	        if(s[i]=='1'&&s[i-1]=='0'){
	            z++;
	        }
	    }
	    if(s[0]=='1')z++;
	    cout<<z<<"\n";
	}
	return 0;
}