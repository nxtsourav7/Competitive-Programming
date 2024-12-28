/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 22:42:07
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, k;
    cin >> n >> k;

    int l = 1, r = n;
    int ans = 0;
    while(r - l + 1 >= k) {
        int m = (l + r) / 2;
        if((r - l + 1) & 1) {
            cerr << "m = " << m << '\n';
            ans += m;
            r = m - 1;
        }
        else r = m;
    }
    cerr << "......................\n";
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