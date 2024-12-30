/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 20:40:57
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {         
    int n;
    cin >> n;
    int g = 0;
    vector<int> a(n);
    for(int &x : a) {
        cin >> x;
        g = __gcd(g, x);
    }

    // key observation : gcd(n , n + 1) = 1 

    if(g == 1) {
        cout << 0;
        return;
    }

    if(__gcd(g, n) == 1) cout << 1;
    else if(__gcd(g, n - 1) == 1) cout << 2;
    else cout << 3;

    // cerr << "GCD: " << g << '\n';
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