/**
 *	author 	: nxtsourav7
 *	created : 2024-12-05 00:20:03
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
    int n;      cin >> n;
    vector<int> b(n - 1);
    for(auto &it : b) {cin >> it;}

    sort(all(b));
    
    vector<int> a(n);
    a[0] = 1;
    for(int i = 0; i < n - 1; ++i) {
        a[i + 1] = b[i] - a[i];
    }

    for(auto& it : a) {
        cout << it << " ";
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