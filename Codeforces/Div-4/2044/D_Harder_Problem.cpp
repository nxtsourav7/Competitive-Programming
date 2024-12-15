/**
 *	author 	: nxtsourav7
 *	created : 2024-12-15 20:57:28
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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    vector<int> v(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        if(!v[a[i]]) {
            v[a[i]] = 1;
            cout << a[i] << " ";
        }
    }

    for(int i = 1; i <= n; ++i) {
        if(!v[i]) cout << i << " ";
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