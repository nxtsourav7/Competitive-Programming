/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 04:17:20
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i += 2) {
        ans = max(ans, a[i]);
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