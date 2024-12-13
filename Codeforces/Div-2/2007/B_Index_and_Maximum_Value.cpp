/**
 *	author 	: nxtsourav7
 *	created : 2024-12-14 02:36:00
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

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    int max_a = *max_element(all(a));
    for(int i = 0; i < m; ++i) {
        char x;
        int l, r;
        cin >> x >> l >> r;

        if(max_a >= l and max_a <= r) {
            if(x == '+') max_a += 1;
            else max_a -= 1;
        }

        cout << max_a << " ";
    }
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