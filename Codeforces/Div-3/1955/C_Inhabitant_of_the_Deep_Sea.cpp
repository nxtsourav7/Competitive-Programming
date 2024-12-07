/**
 *	author 	: nxtsourav7
 *	created : 2024-12-07 11:13:08
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
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    int total = accumulate(all(a), 0LL);
    if(total <= k) {
        cout << n;
        return;
    }

    int ans = 0;
    int dmg = (k + 1) / 2;
    for(int i = 0; i < n; ++i) {
        if(a[i] <= dmg) {
            ans += 1;
            dmg -= a[i];
            a[i] = 0;
        }
        else break;
    }

    dmg = k / 2;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] <= dmg) {
            ans += 1;
            dmg -= a[i];
            a[i] = 0;
        }
        else break;
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