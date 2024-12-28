/**
 *	author 	: nxtsourav7
 *	created : 2024-12-29 01:05:00
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(begin(a), end(a));
    int64_t ans = 0;
    int l = 1, r = 0;
    while(r < n) {
        if(a[r] == l) {
            l += 1;
            r += 1;
        }
        else if(a[r] > l) {
            ans += (a[r] - l);
            l += 1;
            r += 1;
        }
        else r += 1;
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