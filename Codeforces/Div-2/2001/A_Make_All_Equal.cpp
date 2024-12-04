/**
 *	author 	: nxtsourav7
 *	created : 2024-08-24 19:06:02
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
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &it : arr) {cin >> it;}

    vector<int> cnt(n + 1);
    for(auto it : arr) {
        cnt[it]++;
    }
    cout << n - *max_element(all(cnt));
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