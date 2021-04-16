#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    int n,s=0;
    cin>>n;
    int a[n]={0};
    cin>>a[0];
    int min=a[0],max=a[0];
    for(int i=1;i<n;i++){
    	cin>>a[i];
    	if(a[i]>max){
    		max=a[i];
    		s++;
    	}
    	if(a[i]<min){
    		min=a[i];
    		s++;
    	}
    }
    cout<<s;
    return 0;
}