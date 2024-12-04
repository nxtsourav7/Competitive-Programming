/**
 *	author 	: nxtsourav7
 *	created : 2024-12-04 20:43:16
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for(auto &it : a) {cin >> it;}
    for(auto &it : b) {cin >> it;}

    for(int i = 0; i < n; ++i) {
        c[i] = a[i] * b[i];
    }

    sort(rall(c));
    
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += c[i];
        ans++;
        if(sum >= x) {
            cout << ans;
            return;
        }
    }
    cout << -1;
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