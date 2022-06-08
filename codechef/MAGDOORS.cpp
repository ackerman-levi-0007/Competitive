#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t;

    while(t--){
        string str; 
        cin >> str;

        int n = str.length();
        int key = 1 , ans = 0;

        for(int i = 0; i < n; i++ ){
            if(str[i]-'0' != key ){
                key ^= 1;
                ans++;
            }
        }

        cout << ans << "\n";

    }

    return 0;
}


