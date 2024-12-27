/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 00:59:15
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
    int n;
    cin >> n;
    vector<pair<int, int>> A;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back({x, 1});
    }
    for(int i = 0; i < n; ++i) {
        int x;  
        cin >> x;
        A.push_back({x, -1});
    }
    sort(all(A));
    int ans = 0, cnt = 0;
    for(auto [x, y] : A) {
        cnt += y;
        ans = max(ans, cnt);
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