/**
 *	author 	: nxtsourav7
 *	created : 2024-11-23 21:34:41
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
    int x, m;
    cin >> x >> m;

    int bits = (x == 0) ? 1 : static_cast<int>(log2(x)) + 1;
    // cout << bits;
    int ans = 0;
    for(int y = 1; y <= min(1LL << bits, m); ++y) {
        if(x == y) continue;

        int z = x ^ y;

        if(x % z == 0 || y % z == 0) {
            ans++;
            // cerr << y << endl;
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