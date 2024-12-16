/**
 *	author 	: nxtsourav7
 *	created : 2024-12-16 23:49:43
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
    int l, r;
    cin >> l >> r;

    int ans = l, luck = 0;
    for(int i = l; i <= min(r, (l + 100)); ++i) {
        string s = to_string(i);
        char mx = *max_element(all(s));
        char mn = *min_element(all(s));
        int cur = (mx - mn);
        if(cur > luck) {
            ans = i;
            luck = cur;
        }
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