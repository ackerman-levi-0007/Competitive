#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    int n,x;
    cin>>n;
    float f=0.0;
    for(int i=0;i<n;i++){
    	cin>>x;
    	f+=x;
    }
    f=f/n;
    printf("%0.7f",f);
    return 0;
}