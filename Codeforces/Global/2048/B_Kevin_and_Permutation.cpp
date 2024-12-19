/**
 *	author 	: nxtsourav7
 *	created : 2024-12-19 20:47:55
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

    int mx = n, mn = 1;
    for(int i = 1; i <= n; ++i) {
        if(i % k == 0) {
            cout << mn << " ";
            mn += 1;
        }
        else {
            cout << mx << " ";
            mx -= 1;
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