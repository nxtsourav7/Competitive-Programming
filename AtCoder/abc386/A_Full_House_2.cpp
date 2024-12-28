/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 19:38:18
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    set<int> ST;
    for(int i = 0; i < 4; ++i) {
        int x;
        cin >> x;

        ST.insert(x);
    }

    cout << (ST.size() == 2 ? "Yes" : "No");
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q = 1;
    // cin >> Q;
    while(Q--) {
        S0LVE();
        cout << '\n';
    }

    return 0;
}