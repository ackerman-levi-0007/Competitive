#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t;

    while(t--){
        ll p , a , b , c , x , y;
        cin >> p >> a >> b >> c >> x >> y;

        ll mini = min(b + (x*a) , c + (y*a) );


        cout << p / mini <<  "\n";

    }

    return 0;
}


