#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=1;
    for(int i=1;i<n;i++){
    	string x;
    	cin>>x;
    	if(s==x) m++;
    	else m--;
    	if(m==0){
    		s.clear();
    		cin>>s;
    		m=1;
    		i++;
    	}
    }
    cout<<s;
    return 0;
}