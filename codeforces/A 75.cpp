#include<bits/stdc++.h>
using namespace std;
long long int sumof(long long int n){
    long long int sum=0,x=0,m=0,l=0;
    while(n!=0){
        x=n%10;
        if(x>0){
            x=(x*pow(10,l));
            sum=x+sum;
            l++;
        }
        n=n/10;
    }
    return sum;
}
int main(){
    long long int a,b,c;
    cin>>a>>b;
    c=a+b;
    a=sumof(a);
    b=sumof(b);
    c=sumof(c);
    if(a+b==c) cout<<"YES";
    else cout<<"NO";
    return 0;
}