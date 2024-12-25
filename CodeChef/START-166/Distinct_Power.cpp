/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 20:58:01
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
    for(auto &x : A) cin >> x;

    vector<int> B = A;
    sort(all(B));
    int ans = 1;
    for(int i = 0; i + 1< n; ++i) {
        int x = lower_bound(all(B), A[i]) - B.begin();
        int y = lower_bound(all(B), A[i + 1]) - B.begin();

        if(abs(x - y) != 1) {
            ans++;
        }
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