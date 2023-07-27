/*
*	author 	: nxtsourav7
*	problem : Escalator Conversations
*	created : Jul/25/2023 20:40:23
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n,m,k,vh;
	cin >> n>>m>>k>>vh;

	vector<int> p(n);

	for(auto &a : p) cin >> a;

	int count = 0;
	for(int i=0 ; i<n ; i++) {
		if(abs(vh-p[i]) % k == 0 && abs(vh-p[i]) / k <m && vh != p[i]) {
			// cout << p[i] << endl;
			count++;
		}
	}

	cout << count <<'\n';
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
