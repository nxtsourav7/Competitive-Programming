/**
 *	author 	: nxtsourav7
 *	created : 2024-12-27 11:47:12
**/

#include<bits/stdc++.h>
using namespace std;

int result(int a, int b) {
    if(a > b) return 1;
    if(a == b) return 0;
    if(a < b) return -1;
}

void S0LVE() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int x = result(a1, b1) + result(a2, b2) > 0;
    int y = result(a1, b2) + result(a2, b1) > 0;
    cout << (x + y) * 2;
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