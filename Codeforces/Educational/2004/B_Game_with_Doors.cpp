/**
 *	author 	: nxtsourav7
 *	created : 2024-08-15 20:51:19
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
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    if(r < L || R < l) cout << 1;
    else if((L < l and R > r) || (l < L and r > R)) {
        cout << min((r - l) , (R - L)) + 2;
    }
    else if(l == L and r == R) cout << R - l;
    else if(l == L || r == R) {
        cout << min((r - L), (R - l)) + 1;
    }
    else cout << min((r - L), (R - l)) + 2;
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