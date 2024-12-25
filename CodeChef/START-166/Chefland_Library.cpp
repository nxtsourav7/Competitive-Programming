/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 20:43:59
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
    vector<int> A(n);
    for(auto &x : A) cin >> x;

    map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        mp[A[i]] = max(mp[A[i]], i + 1);
    }
    int ans = 0;
    for(auto& it : mp) {
        ans += it.second;
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