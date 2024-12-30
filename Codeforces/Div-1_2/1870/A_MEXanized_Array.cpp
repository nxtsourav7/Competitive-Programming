/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 20:11:08
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, k, x;
    cin >> n >> k >> x;

    if(n < k || x < k - 1) {
        cout << - 1;
        return;
    }

    int ans = (k * (k - 1)) / 2;
    ans += ((n - k) * x);
    if(x == k) ans -= (n - k);
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