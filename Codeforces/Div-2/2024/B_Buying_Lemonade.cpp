/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 13:55:14
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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(auto &x : A) cin >> x;

    sort(all(A));
    int ans = k;
    int cur = 0;
    for(int i = 0; i < n; ++i) {
        if((A[i] - cur) * (n - i) >= k) break;
        else {
            ans += 1;
            k -= (A[i] - cur) * (n - i);
        }
        cur = A[i];
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