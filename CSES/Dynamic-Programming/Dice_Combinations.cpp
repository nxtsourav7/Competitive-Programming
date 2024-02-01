/**
 *	author 	: nxtsourav7
 *	created : 2024-02-01 22:36:25
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl "\n"
#define f first 
#define s second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


const int MOD = 1e9+7;


auto solve = []() {
	int n;
    cin >> n;

    vi dp(n+1);
    dp[0] = 1;
    for(int i=1; i<=n; ++i) {
        int sum = 0;
        for(int j=1; j<=min(i,(int)6); ++j) {
            sum += dp[i-j];
        }

        dp[i] = sum % MOD;
    }

    cout << dp[n];
};


int32_t main() {
	fastIO;
	// cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}