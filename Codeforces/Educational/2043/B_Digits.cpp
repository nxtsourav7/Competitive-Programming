/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 05:09:22
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, d;
    cin >> n >> d;

    cout << 1 << ' ';
    if(n >= 3 || d % 3 == 0) cout << 3 << ' ';
    if(d == 5) cout << 5 << ' ';
    if(n >= 3 || d == 7) cout << 7 << ' ';
    if(n >= 6 || (d % 3 == 0 and n >= 3) || d == 9) cout << 9 << ' ';
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