#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int d=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            sum++;
            continue;
        }
        if(d>0){
            int x=arr[i];
            if(arr[x]==i){
                swap(arr[i],arr[x]);
                sum++;
                d--;
            }
        }        
    }
    if(sum<n && d>0) cout<< sum + 1;
    else cout << sum;
    return 0;
}