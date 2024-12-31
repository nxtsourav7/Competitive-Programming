/**
 *	author 	: nxtsourav7
 *	created : 2024-12-31 16:54:47
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int ans = a[0] - 0;
    for(int i = 0; i < n - 1; ++i) {
        ans = max(ans, a[i + 1] - a[i]);
    }
    cout << max(ans , (x - a[n - 1]) * 2);
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