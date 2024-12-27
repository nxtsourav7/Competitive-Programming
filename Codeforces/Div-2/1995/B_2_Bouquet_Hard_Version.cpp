/**
 *	author 	: nxtsourav7
 *	created : 2024-12-27 20:10:33
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n; 
    int64_t m;
    cin >> n >> m;
    vector<int64_t> a(n), c(n);
    for(auto &x : a) cin >> x;
    for(auto &x : c) cin >> x;

    map<int64_t, int64_t> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]] = c[i];
    }

    int64_t ans = 0;
    for(auto [k, c0] : mp) {
        auto it = mp.find(k + 1);
        auto c1 = it == mp.end() ? 0 : it->second;

        // c0 flowers with k petals
        // c1 flowers with k + 1 petals
        
        auto x = min(c0, m / k); // x flowers with k petals
        auto y = min(c1, (m - k * x) / (k + 1)); // y flowers with k + 1 petals
        auto total = x * k + y * (k + 1); // total flowers
        auto add = min({x, c1 - y, m - total}); // add flowers with k + 1 petals (remove k petals same ammount)to maximize the total flowers
        // auto add = min({x, c1 - y, (m - x * k) % (k + 1)}); // author : tourist
        ans = max(ans, total + add);
    }
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while(Q--) {
        S0LVE();
        cout << '\n';
    }

    return 0;
}