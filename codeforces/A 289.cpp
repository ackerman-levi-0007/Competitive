#include<bits/stdc++.h>
using namespace std;
     
int main(){
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        int x, y;
        cin >> x >> y;
        sum = sum + y - x + 1;
        sum %= k;
    }
    cout << ((sum!=0) ? k-sum : sum) << "\n";
    return 0;
}