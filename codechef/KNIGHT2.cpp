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

void check(int a, int b, int x, int y, vector<vector<bool>> visit, bool& ans, bool& fans, int count){
	if(ans) return;
	visit[a][b] = true;
	if(a==x && b==y){
		ans = true;
		if(count <= 100){
			if(count%2 == 0) fans = true;
		}
		return;
	}
	if(b+1<8){
		if(a+2<8 && !visit[a+2][b+1]) check(a+2, b+1, x, y, visit, ans, fans, count+1);
		if(a-2>=0 && !visit[a-2][b+1]) check(a-2, b+1, x, y, visit, ans, fans, count+1);
	}
	if(b-1>=0){
		if(a+2<8 && !visit[a+2][b-1]) check(a+2, b-1, x, y, visit, ans, fans, count+1);
		if(a-2>=0 && !visit[a-2][b-1]) check(a-2, b-1, x, y, visit, ans, fans, count+1);
	}
	if(a+1<8){
		if(b+2<8 && !visit[a+1][b+2]) check(a+1, b+2, x, y, visit, ans, fans, count+1);
		if(b-2>=0 && !visit[a+1][b-2]) check(a+1, b-2, x, y, visit, ans, fans, count+1);
	}
	if(a-1>=0){
		if(b+2<8 && !visit[a-1][b+2]) check(a-1, b+2, x, y, visit, ans, fans, count+1);
		if(b-2>=0 && !visit[a-1][b-2]) check(a-1, b-2, x, y, visit, ans, fans, count+1);
	}
}

void solve() {

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    a--; b--; x--; y--;
    vector<vector<bool>> visit(8, vector<bool>(8, false));
    bool ans = false, fans = false;
    int count = 0;
    check(a, b, x, y, visit, ans, fans, count);
    if(fans) cout<<"YES\n";
    else cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


