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

    string s;
    cin >> s;
    int arr[7]={0};
    if(s[0] != '0') arr[3] = 1;
    if(s[1] != '0') arr[2] = 1;
    if(s[2] != '0') arr[4] = 1;
    if(s[3] != '0') arr[1] = 1;
    if(s[4] != '0') arr[3] = 1;
    if(s[5] != '0') arr[5] = 1;
    if(s[6] != '0') arr[0] = 1;
    if(s[7] != '0') arr[2] = 1;
    if(s[8] != '0') arr[4] = 1;
    if(s[9] != '0') arr[6] = 1;
    bool ans = false;
    if(s[0] == '0'){
    	for(int i=0 ; i<7 ; i++){
    		if(arr[i] == 0) continue;
    		for(int j=i+2 ; j<7 ; j++){
    			if(arr[j] == 0) continue;
    			bool x=true;
    			for(int z=i+1 ; z<j ; z++){
    				if(arr[z] != 0){
    					x=false;
    					break;
    				}
    			}
    			if(x){
    				ans = true;
    				break;
    			}
    		}
    		if(ans) break;
    	}
    }
    if(ans) cout<<"Yes\n";
    else cout<<"No\n";
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


