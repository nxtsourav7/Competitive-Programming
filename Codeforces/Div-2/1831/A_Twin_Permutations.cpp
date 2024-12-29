/**
 *	author 	: nxtsourav7
 *	created : 2024-12-29 02:50:33
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    for(int i = 0; i < n; ++i) {
        cout << abs(n + 1 - a[i]) << ' ';
    }
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