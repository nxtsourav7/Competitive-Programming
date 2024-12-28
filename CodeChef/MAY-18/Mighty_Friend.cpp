/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 01:12:21
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
    vector<int> A(n);
    for(auto &x : A) cin >> x;

    vector<int> motu, tomu;
    for(int i = 0; i < n; ++i) {
        if(i & 1) tomu.push_back(A[i]);
        else motu.push_back(A[i]);
    }

    sort(rall(motu));
    sort(all(tomu));
    for(int i = 0; i < min(n / 2, k); ++i) {
        if(motu[i] > tomu[i]) {
            swap(motu[i], tomu[i]);
        }
    }

    int motuSum = accumulate(all(motu), 0LL);
    int tomuSum = accumulate(all(tomu), 0LL);

    cout << (tomuSum > motuSum ? "YES" : "NO");
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