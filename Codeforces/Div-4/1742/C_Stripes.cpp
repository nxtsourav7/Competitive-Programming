/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 20:24:00
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    vector<string> s(8);
    for(auto &x : s) cin >> x;

    for(int i = 0; i < 8; ++i) {
        bool flag = true;
        for(int j = 0; j < 8; ++j) {
            if(s[i][j] != 'R') flag = false;
        }
        if(flag) {
            cout << "R";
            return;
        }
    }

    for(int i = 0; i < 8; ++i) {
        bool flag = true;
        for(int j = 0; j < 8; ++j) {
            if(s[j][i] != 'B') flag = false;
        }
        if(flag) {
            cout << "B";
            return;
        }
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