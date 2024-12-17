/**
 *	author 	: nxtsourav7
 *	created : 2024-12-18 00:17:31
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

    // find the maximal subsequence of the numbers [1,2,3…]
    int cnt = 0;
    bool flag = false;
    for(int i = 0; i < n; ++i) {
        if(flag) {
            if(a[i] == cnt + 1) cnt += 1;
        }
        if(a[i] == 1) {
            flag = true;
            cnt = 1;
        }
    }

    cnt = n - cnt;
    cout << (cnt + k -1) / k;
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