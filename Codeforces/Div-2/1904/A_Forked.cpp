/**
 *	author 	: nxtsourav7
 *	created : 2024-12-20 14:22:01
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

int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};

void move(set<pair<int, int>> &s, int a, int b, int x, int y) {
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 4; ++j) {
            s.insert({x + dx[j] * a, y + dy[j] * b});
        }
        swap(a, b);
    }
}

void solve() {
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;

    set<pair<int, int>> s;

    move(s, a, b, kx, ky);
    move(s, a, b, qx, qy);

    if(sz(s) <= 8) cout << 8 - sz(s);
    else cout << 16 - sz(s);
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