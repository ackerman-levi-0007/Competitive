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

    int n , m; cin >> n >> m;
    vector<vector<bool>> vec(n+1, vector<bool>(n+1, false));
    F0R(i,m){
    	int a, b;
    	cin >> a >> b;
    	vec[a][b] = true;
    	vec[b][a] = true;
    }
    int ans = 0;
    set<tuple<int, int, int> > setOfTuples;
    FOR(i,1,n+1){
    	FOR(j,i,n+1){
    		FOR(z,1,n+1){
    			if(vec[i][j] && vec[j][z] && vec[z][i]){
    				vector<int> v(3,0);
    				v[0] = i;
    				v[1] = j;
    				v[2] = z;
    				sor(v);
    				tuple<int, int, int> tuple1;
    				tuple1 = make_tuple(v[0], v[1], v[2]);
    				setOfTuples.insert(tuple1);
    			}
    		}
    	}
    }
    cout << setOfTuples.size() <<"\n";
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


