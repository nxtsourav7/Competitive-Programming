/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 20:10:45
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != '0') {
            ans += 1;
            ans += (cnt + 1) / 2;
            cnt = 0;
        }
        else {
            cnt += 1;
        }
    }
    cout << ans + (cnt + 1) / 2;
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