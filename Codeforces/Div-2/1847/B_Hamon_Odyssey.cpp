/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 15:43:30
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int res = ~0;
    for(auto& i: a) {
        cin >> i;
        res &= i;
    }
    if(res != 0) {cout << 1; return;}

    res = ~0;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        res &= a[i];
        if(res == 0) {
            ans += 1;
            res = ~0;
        }
    }
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        solve();
        cout << endl;
    }
    return 0;
}