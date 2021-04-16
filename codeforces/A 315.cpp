#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, an=0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j){
                an++;
                break;
            }
        }
    }
    cout << n-an;    
    return 0;
}