/**
 *	author 	: nxtsourav7
 *	created : 2024-12-07 18:09:33
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
    int n;      cin >> n;

    int t, v;
    cin >> t >> v;
    int sum = v, cur = t;
    for(int i = 1; i < n; ++i) {
        cin >> t >> v;

        if(t - cur < sum) sum -= (t - cur);
        else sum = 0;

        sum += v;
        cur = t;
    }

    cout << sum;
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