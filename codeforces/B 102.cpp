#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
    	cout<<"0";
    	return 0;
    }
    int sum=0;
    for(int i=0;i<n;i++) sum=sum+s[i]-'0';
    int k=1;
	while(sum>=0){
		if(sum<10){
		    cout<<k;
		    break;
		}
		else{
			int h=0;
			while(sum>0){
				int m=sum%10;
				h=h+m;
				sum=sum/10;
			}
			sum=h;
			k++;
		}
	}
    return 0;
}