#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a[14];
    a[0]=4;
    a[1]=7;
    a[2]=44;
    a[3]=47;
    a[4]=74;
    a[5]=77;
    a[6]=444;
    a[7]=447;
    a[8]=474;
    a[9]=477;
    a[10]=744;
    a[11]=747;
    a[12]=774;
    a[13]=777;
    int n,i=0,d=0;
    cin >> n;
    while(a[i]<=n&&i<=13){
        if(n%a[i]==0){
            d++;
            break;
        }
        i++;
    }
    if(d==1) cout <<"YES";
    else cout << "NO";
    return 0;
}