/**
 *	author 	: nxtsourav7
 *	created : 2024-12-29 00:48:40
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool flag = false;
    for(auto &x : a) {
        cin >> x;
        if(x == 1) flag = true;
    }

    cout << (flag ? "YES" : "NO");
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