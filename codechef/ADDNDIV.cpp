#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t;

    ll a , b , num;

    while(t--){
        // ll a , b , num ;
        cin >> a >> b;
        num = __gcd(a , b);
        while(num != 1 ){
            num = __gcd(a , b);
            a /= num;
        }

        if(a == 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

        // num = 2;
        // bool flag = true;

        // while(a >= num ){
        //     if(a % num == 0){
        //         if(b % num ){
        //             cout << "NO\n";
        //             flag = false;
        //             break;
        //         }
        //         while(a % num == 0){
        //             a /= num;
        //         }
        //     }

        //     num++;
        // }

        //  if(flag){
        //     cout << "YES\n";
        // }


        // if(b == 1){
        //     if(a== 1){
        //         cout << "YES\n";
        //     }else{
        //         cout << "NO\n";
        //     }
        //     continue;
        // }

        // num = b;
        // bool flag = true;

        // while(num > 0){
        //     if(num % a == 0 ){
        //         cout << "YES\n";
        //         flag = false;
        //         break;
        //     }

        //     num *= b;
        // }

        // if(flag){
        //     cout << "NO\n";
        // }

    }

    return 0;
}


