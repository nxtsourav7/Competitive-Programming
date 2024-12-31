/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 00:04:12
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve() {
    int n, k;
    cin >> n >> k;

    // key observation : always add k - 1 {1} in the multiset except the last operation
    // so, ans is ceil of (n - 1) / (k - 1)
    n -= 1, k -= 1;
    cout << (n + k - 1) / k; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        solve();
        cout << endl;
    }
    return 0;
}