/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 21:42:24   
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
    int x, y, k;
    cin >> x >> y >> k;

    int a = 2 * ((x + k - 1) / k) - 1;
    int b = 2 * ((y + k - 1) / k);

    cout << max(a, b);
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