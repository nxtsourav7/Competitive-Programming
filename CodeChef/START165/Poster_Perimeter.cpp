/**
 *	author 	: nxtsourav7
 *	created : 2024-12-18 20:38:45
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

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    // if(k == 1) {
    //     cout << 3;
    //     return;
    // }
    // int p = 2 * (n + m);
    // if(k & 1) {
    //     if(p >= k - 1) cout << 1;
    //     else cout << k - p;
    // }
    // else {
    //     if(p >= k) cout << 0;
    //     else cout << k - p;
    // }

    int ans = 1E9;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            int p = 2 * (i + j);
            ans = min(ans , abs(k - p));
        }
    }
    cout << ans;
}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}