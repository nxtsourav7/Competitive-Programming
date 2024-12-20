/**
 *	author 	: nxtsourav7
 *	created : 2024-12-21 03:01:27
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
    int N, q;
    cin >> N >> q;
    vector<int> A(N);
    for(auto &x : A) cin >> x;

    sort(all(A));
    vector<int> pre(N + 1);
    for(int i = 1; i <= N; ++i) pre[i] = pre[i - 1] + A[i - 1];
    while(q--) {
        int x, y;
        cin >> x >> y;

        int l = N - x + 1;
        int r = l + y - 1;

        cout << pre[r] - pre[l - 1] << endl;
    }
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