/**
 *	author 	: nxtsourav7
 *	created : 2024-12-14 23:37:45
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

bool is_remain(int b, int c) {
    return (~(b + c) & 1);
}

void solve() {
    int a, b, c;    
    cin >> a >> b >> c;

    cout << is_remain(b, c) << " " << is_remain(a, c) << " " << is_remain(a, b);
}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}