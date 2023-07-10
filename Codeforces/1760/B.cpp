/*
*	author 	: nxtsourav7
*	problem : Atilla's Favorite Problem
*	created : Jul/10/2023 14:05:36
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
	int n;
    string s;
    cin >> n >> s;


    sort(s.rbegin(),s.rend());


    cout << s[0] - 'a' + 1 << '\n';
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