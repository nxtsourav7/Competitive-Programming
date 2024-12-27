/**
 *	author 	: nxtsourav7
 *	created : 2024-12-27 22:39:42
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;  
    cin >> n;
    vector<int> b(n - 1);
    for(int &x : b) cin >> x;

    vector<int> ans(n);
    ans[0] = b[0];
    for(int i = 1; i < n; ++i) {
        // ans[i] = b[i - 1] | b[i];
        ans[i] = b[i - 1] | (i == n - 1 ? 0 : b[i]);
        if((ans[i] & ans[i - 1]) != b[i - 1]) {
            cout << - 1;
            return;
        }
    }
    for(auto x : ans) cout << x << ' ';
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