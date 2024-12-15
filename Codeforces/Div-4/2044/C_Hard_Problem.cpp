/**
 *	author 	: nxtsourav7
 *	created : 2024-12-15 20:47:10
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
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int rem_a = m - min(m, a);
    int rem_b = m - min(m, b);

    cout << min(m, a) + min(m, b) + min(c, rem_a + rem_b);
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