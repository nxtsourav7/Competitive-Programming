/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 05:16:09
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
    vector<int> A(n);
    for(auto &x : A) {cin >> x;}

    multiset<int> towers;
    for(int i = 0; i < n; ++i) {
        auto it = towers.upper_bound(A[i]);
        if(it != towers.end()) {
            towers.erase(it);
        }
        towers.insert(A[i]);
    }
    // for(auto& it : towers) {cerr << it << " ";} cerr << endl;
    cout << sz(towers);
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}