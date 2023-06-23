/*
*	author 	: nxtsourav7
*	problem : Black Square
*	created : Jun/23/2023 10:28:24
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
    vector<int> v(5);

    for(int i=1 ; i<=4 ; i++) {
        cin >> v[i];
    }

    string s;
    cin >> s;

    int sum = 0;
    for(int i=0 ; i<s.size() ; i++) {
        sum += v[s[i]-'0'];
    }

    cout << sum << endl;
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	// cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}