/**
 *	author 	: nxtsourav7
 *	created : 2024-12-04 11:37:40
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
    int n;      cin >> n;
    vector<vector<int>> a(2, vector<int> (n));
    for (auto &row : a) {
     for (auto &it : row) {cin >> it;}
    }

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += max(a[0][i], a[1][i]);
    }

    int ans = -1e18;
    for(int i = 0; i < n; ++i) {
        ans = max(ans, (sum + min(a[0][i], a[1][i])));
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