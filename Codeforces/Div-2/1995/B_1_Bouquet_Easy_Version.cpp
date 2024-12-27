/**
 *	author 	: nxtsourav7
 *	created : 2024-12-27 15:04:34
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    int64_t m;
    cin >> n >> m;
    vector<int64_t> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    int64_t sum = 0;
    int l = 0, r = 0;
    int64_t ans = 0;
    while(r < n) {
        if(sum + a[r] <= m and a[l] + 1 >= a[r]) {
            sum += a[r];
            r++;
            ans = max(ans, sum);
        }
        else {
            sum -= a[l];
            l++;
        } 

        if(l > r) {
            r = l;
            sum = 0;
        }
    }
    cout << ans;
}

void S1LVE() {
    int n;
    int64_t m;
    cin >> n >> m;
    vector<int64_t> a(n);
    map<int64_t, int64_t> mp;
    for(auto &x : a) {
        cin >> x;
        mp[x] += 1;
    }

    int64_t ans = 0;
    for(auto [k, c0] : mp) {
        auto it = mp.find(k + 1);
        auto c1 = it != mp.end() ? it->second : 0;

        auto x = min(c0, m / k);
        auto y = min(c1, (m - k * x) / (k + 1));
        auto minPetals = x * k + y * (k + 1);
        auto add = min({x, c1 - y, m - minPetals});
        ans = max(ans, minPetals + add);
    }
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while(Q--) {
        // S0LVE();
        S1LVE();
        cout << '\n';
    }

    return 0;
}