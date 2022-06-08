#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t;

    while(t--){
        int  n ,p , x , y;
        cin >> n >> p >> x >> y;
        int input , ans = 0;

        for(int i = 0; i < n; i++){
            cin >> input;
            if(i < p){
                if(input){
                    ans += y;

                }else{
                    ans += x;
                }
            }
        }

        cout << ans << "\n";

    }

    return 0;
}


