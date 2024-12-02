/**
 *	author 	: nxtsourav7
 *	created : 2024-12-01 21:18:31
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

const int m = 998244353;
vector<int> dp(1e7 + 5);

void solve() {
    int n;
    cin >> n;
    
    cout << dp[n];
}

int32_t main() {
    fastIO;

    int ans = 1;
    for(int i = 1; i <= 1e7 + 1; ++i) {
        ans = ((ans % m) * (i % m)) % m;
        dp[i - 1] = ans;
    }

    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}