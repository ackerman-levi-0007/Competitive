#include<bits/stdc++.h>
using namespace std;
     
int main(){
    int n;
    cin >> n;
    int row[n], colum[n];
    memset(colum,0,sizeof(colum));
    for(int i=0 ; i<n ; i++){
        int sum = 0;
        for(int j=0 ; j<n ; j++){
            int x;
            cin >> x;
            colum[j] += x;
            sum += x;
        }
        row[i] = sum;
    }
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(row[i] < colum[j]) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}