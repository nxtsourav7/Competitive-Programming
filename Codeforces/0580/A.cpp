/*
*	author 	: nxtsourav7
*	problem : Kefa and First Steps
*	created : Oct/24/2023 07:53:43
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define sz(a) (int)(a).size()
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n;
    cin >> n;

    int array[n];

    for(auto &a : array) cin >> a;
    int count = 1, ans = 1;
    for(int i=0 ; i<n-1 ; ++i) {
        if(array[i]<=array[i+1]) {
            count++;
        }
        else {
            count = 1;
        }
        ans = max(ans , count);
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
