/**
 *	author 	: nxtsourav7
 *	created : 2024-12-18 21:03:14
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

    int mx = a[n - 1];
    int cnt = 0;
    int ans = 0;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] >= mx) {
            mx = a[i];
            ans = max(ans, cnt);
            cnt = 0;
        }
        else cnt++;
    }

    cout << max(ans, cnt);
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