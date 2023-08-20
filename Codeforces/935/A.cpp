/*
*	author 	: nxtsourav7
*	problem : Fafa and his company
*	created : 2023-08-20 07:21:50
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
	read(x);

    int ans = 1;

    for(int i=2 ; i<= sqrt(x) ; ++i) {
        if(x%i == 0 ) {
            if(x/i != i)
                ans += 2;
            else ans++;
        }
        
    }

    cout << ans << '\n';
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
