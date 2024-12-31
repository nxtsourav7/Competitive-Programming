/**
 *	author 	: nxtsourav7
 *	created : 2024-12-31 17:15:59
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int k, n;
    cin >> k >> n;
    vector<int> ans(k);

    int last = n - k + 1;
    ans[0] = 1;
    int diff = 1;
    cout << 1 << ' ';
    while(ans[diff - 1] + diff <= last && diff < k) {
        ans[diff] = ans[diff - 1] + diff;
        cout << ans[diff] << ' ';
        last += 1;
        diff += 1;
    }
    for (int i = last + 1; i <= n; i++) cout << i << ' ';
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