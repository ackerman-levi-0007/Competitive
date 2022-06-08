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

    string a, s, b="";
    cin >> a >> s;
    bool ans = true;
    int n = a.size() , m = s.size();
    int j=m-1;
    for(int i=n-1 ; i>=0 ; i--){
    	if(j<0){
    		ans = false;
    		break;
    	}
    	if(s[j] < a[i]){
    		int x=s[j]-'0';
    		int y=s[j-1]-'0';
    		j=j-2;
    		int z=(y*10)+x;
    		x=a[i]-'0';
    		y=z-x;
    		if(y>=10 || y<0){
    			ans = false;
    			break;
    		}
    		char ch = y+'0';
    		b = b+ch;
    	}
    	else{
    		int x = s[j]-'0';
    		int y = a[i]-'0';
    		j--;
    		int z = x-y;
    		char ch = z + '0';
    		b = b + ch;
    	}
    }
    if(ans) {
    	for(j ; j>=0 ; j--) b = b + s[j];
    	int k = b.size() - 1;
    	while(b[k] == '0') k--;
    	for(k ; k>=0 ; k--) cout<<b[k];
    	cout<<"\n";
    }
    else cout<<"-1\n";

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


