/**
 *	author 	: nxtsourav7
 *	created : 2024-12-15 21:49:58
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
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    vector<int> power_k;
    power_k.push_back(1);
    while(true) {
        if(k * power_k.back() > 1E9) break;
        power_k.push_back(k * power_k.back());
    }

    int ans = 0;
    for(int i = 0; i < sz(power_k); ++i) {
        // int tmp1 = max(l1, (int)ceil((float)l2/power_k[i])); // don't use ceil
        int tmp1 = max(l1, (l2 + power_k[i] - 1) / power_k[i]);
        int tmp2 = min(r1, r2/power_k[i]); 

        ans += max(0LL, tmp2 - tmp1 + 1);
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