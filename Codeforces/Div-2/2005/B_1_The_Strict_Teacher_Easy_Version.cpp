/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 12:51:05
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
    int n, m,q;
    cin >> n >> m >> q;
    vector<int> A(m);
    for(auto &x : A) cin >> x;
    sort(all(A));
    while(q--) {
        int x;
        cin >> x;

        if(x < A[0]) cout << A[0] - 1 << " ";
        else if(x > A[m - 1]) cout << n - A[m- 1];
        else {
            cout << (A[m -1] - A[0]) / 2;
        }
    }
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