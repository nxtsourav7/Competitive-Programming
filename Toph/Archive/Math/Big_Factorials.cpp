/**
 *	author 	: nxtsourav7
 *	created : 2024-12-12 04:08:20
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

const int MOD = 1E9;

void solve() {
    int n;      cin >> n;

    int ans = 1;
    for(int i = 1; i <= n; ++i) {
        ans *= i;
        ans %= MOD;
    }

    cout << (ans % 10000 == 0 ? "0000" : to_string(ans % 10000));
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}