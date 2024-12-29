/**
 *	author 	: nxtsourav7
 *	created : 2024-12-29 03:11:27
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int x, y;
    cin >> x >> y;

    for(int i = 0; i < 30; ++i) {
        if(((x >> i) & 1) != ((y >> i) & 1)) {
            cout << (1 << i);
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