#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int o=0,s=0,x;
        for(int i=0;i<n;i++){
        	cin>>x;
        	a[x-1]=i;
        }
        int b[n];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=1;i<n;i++){
        	if(a[i]<=a[i-1]){
        		x=b[a[i]];
        		while(a[i]<=a[i-1]){
        			a[i]+=x;
        			s++;
        		}
        	}
        }
        cout<<s<<"\n";
    }
    return 0;
}