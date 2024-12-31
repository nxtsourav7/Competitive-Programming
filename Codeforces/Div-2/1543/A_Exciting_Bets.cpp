/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 23:46:33
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int64_t a, b;
    cin >> a >> b;
    
    // gcd(a,b) = gcd(a-b,b)
    if(a == b) cout << 0 << ' ' << 0;
    else {
        int64_t x = abs(a - b);
        cout << x << ' ' << min(a % x, x - a % x);
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