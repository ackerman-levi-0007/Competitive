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
 
    map<char,int> m;
    map<int, char> mn;
    for(int i=0 ; i<26 ; i++){
    	char ch;
    	cin >> ch;
    	m.insert({ch , i});
    	mn.insert({i, ch});
    }
    vector<string> vec;
	int n; cin >> n;
	for(int itr=0 ; itr<n ; itr++){
		string s;
		cin >> s;
		for(int i=0 ; i<s.size() ; i++){
			s[i] = (char)m[s[i]] +'a';
		}
		vec.push_back(s);
	}
	sort(vec.begin() , vec.end());
    
	for(int itr=0 ; itr<n ; itr++){
		for(int i=0 ; i<vec[itr].size() ; i++){
			int x = vec[itr][i] - 'a';
			vec[itr][i] = mn[x];
		}
		cout << vec[itr] << endl;
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