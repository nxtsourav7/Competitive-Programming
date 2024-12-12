/**
 *	author 	: nxtsourav7
 *	created : 2024-12-12 12:24:40
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
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = -i;
    }

    sort(rall(a));

    int ans = n - 1;
    for(int i = 0; i < n; ++i) {
        int tmp = -a[i].second + i;
        ans = min(ans, tmp);
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