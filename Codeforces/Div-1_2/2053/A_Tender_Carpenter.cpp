/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 20:42:34
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    for(int i = 0; i < n - 1; ++i) {
        int x = min(a[i], a[i + 1]);
        int y = max(a[i], a[i + 1]);

        if(2 * x > y) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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