/*
*	author 	: nxtsourav7
*	problem : Make Even
*	created : 2023/10/26 23:29:48
*/

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double;

// pairs
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
#define mp make_pair
#define f first
#define s second

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()


//SOLUTION
void solve() {
	int n;
	cin >> n;
	
	if(n%2 == 0 ) {
		cout << "0\n";
		return;
	}
	
	string s = to_string(n);
	for(int i=0 ; i<s.size() ; ++i) {
		int x = s[i] - '0';
		
		if(x%2 == 0) {
			if(i==0) {
				cout << "1\n";
			}
			else {
				cout << "2\n";
			}
			return;
		}
	}
	
	cout << "-1\n";
	
}
	
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}


/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 * 
 * --Benq
 */
