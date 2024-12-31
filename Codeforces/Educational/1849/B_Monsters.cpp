/**
 *	author 	: nxtsourav7
 *	created : 2024-12-31 22:37:01
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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].first = (a[i].first % k) ? a[i].first % k : k;
        a[i].second = -i - 1;
    }

    sort(rall(a));
    echo(i, a) cout << -i.second << " ";
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