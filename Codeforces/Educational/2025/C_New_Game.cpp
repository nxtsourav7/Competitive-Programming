/**
 *	author 	: nxtsourav7
 *	created : 2024-11-29 23:03:07
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

    sort(all(a));
    
    int ans = 0;
    for(int s = 0, e = 0; s < n; ++s) {
        e = max(s, e);
        while(a[e+1] <= (a[e] + 1) and a[e+1] < (a[s] + k) and (e + 1) < n) {
            e++;
        }
        ans = max(ans , (e - s + 1));
    }
    cout << ans;
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