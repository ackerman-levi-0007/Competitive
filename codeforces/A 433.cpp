#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=0,n2=0;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	if(x==100) n1++;
    	else n2++;
    }
    if(n1%2==0){
    	n2=n2+(n1/2);
    	if(n2%2==0){
    		cout<<"YES";
    		return 0;
    	}
    	if(n1>=2){
    		n2=n2-1;
    		if(n2%2==0){
    			cout<<"YES";
    			return 0;
    		}
    	}
    }
    cout<<"NO";
    return 0;
}