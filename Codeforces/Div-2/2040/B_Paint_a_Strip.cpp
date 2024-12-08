/**
 *	author 	: nxtsourav7
 *	created : 2024-12-08 21:03:43
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

    // cout << log2(n);
    if(n == 1) {
        cout << 1;
        return;
    }
    int sum = 1;
    int ans = 1;
    for(int i = 1; i <= 20; i++) {
        ans += 1;
        sum = (sum + 1) * 2;
        if(sum >= n) {
            cout << ans;
            return;
        }
    }
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