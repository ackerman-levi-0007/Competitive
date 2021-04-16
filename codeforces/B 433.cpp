#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,s=0;
    cin >> n;
    long long int a[n],b[n];
    for(long long int i=0;i<n;i++){
        cin >> a[i];
        s+=a[i];
        b[i]=s;
    }
    sort(a,a+n);
    s=0;
    for(long long int i=0;i<n;i++){
        s+=a[i];
        a[i]=s;
    }
    long long int m,x,y,z;
    cin >>m;
    for(long long int i=0;i<m;i++){
        cin >> x >> y >> z;
        if(x==1){
            if(y==1) cout << b[z-1] <<"\n";
            else cout << b[z-1]-b[y-2] <<"\n";
        }
        else {
            if(y==1) cout << a[z-1] <<"\n";
            else cout << a[z-1]-a[y-2] <<"\n";
        }
    }
    return 0;
}