#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down


void solve() {

   ll n;
   cin >> n;
   vector<ll> arr(n,0);
   for (ll i=0 ; i<n ; i++) cin >> arr[i];
   sor(arr);
   ll minodd = -1, maxodd = -1, mineven = -1, maxeven = -1, ans = -1;

   for(ll i=0 ; i<n ; i++){
   		if(arr[i]%2 == 0){
   			if(maxeven == -1) maxeven = arr[i];
   			else{
   				mineven = maxeven;
   				maxeven = arr[i];
   				ans = max(ans, mineven+maxeven);
   			}
   		}
   		else{
   			if(maxodd == -1) maxodd = arr[i];
   			else{
   				minodd = maxodd;
   				maxodd = arr[i];
   				ans = max(ans, minodd+maxodd);
   			}
   		}
   }

   cout << ans  << "\n";

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // time_t start , end;

    // time(&start);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


