/**
 *	author 	: nxtsourav7
 *	created : 2024-12-21 22:24:32
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
    int l, r, a;
    cin >> l >> r >> a;

    int ans = r / a + r % a;
    int x = r - r % a - 1;
    if(x >= l) {
        ans = max(ans, x / a + x % a);
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