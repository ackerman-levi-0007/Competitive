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

    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int math[n], eng[n], tot[n];
    vector<bool> ans(n, false);
    F0R(i,n){
    	cin >> math[i];
    }
    F0R(i,n){
    	cin >> eng[i];
    	tot[i] = math[i]+eng[i];
    }
    F0R(i,x){
    	int a = 0, an = -1;
    	R0F(j,n){
    		if(ans[j] == false){
    			if(a <= math[j]){
    				a=math[j];
    				an=j;
    			}
    		}
    	}
    	if(an != -1){
    		ans[an] = true;
    	}
    }
    F0R(i,y){
    	int a = 0, an = -1;
    	R0F(j,n){
    		if(ans[j] == false){
    			if(a <= eng[j]){
    				a=eng[j];
    				an=j;
    			}
    		}
    	}
    	if(an != -1){
    		ans[an] = true;
    	}
    }
    F0R(i,z){
    	int a = 0, an = -1;
    	R0F(j,n){
    		if(ans[j] == false){
    			if(a <= tot[j]){
    				a=tot[j];
    				an=j;
    			}
    		}
    	}
    	if(an != -1){
    		ans[an] = true;
    	}
    }
    F0R(i,n){
    	if(ans[i]) cout<<i+1<<"\n";
    }
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


