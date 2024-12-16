/**
 *	author 	: nxtsourav7
 *	created : 2024-12-16 23:09:06
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(abs(a[i] - i - 1) % k != 0) cnt += 1;
    }

    if(cnt == 0) cout << 0;
    else if(cnt == 2) cout << 1;
    else cout << -1;
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