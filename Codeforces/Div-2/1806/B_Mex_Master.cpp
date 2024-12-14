/**
 *	author 	: nxtsourav7
 *	created : 2024-12-14 19:43:19
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
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    int zero = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] == 0) zero += 1;
    }

    if(zero <= (n + 1) / 2) cout << 0;
    else {
        int max_a = *max_element(all(a));
        if(max_a == 1) cout << 2;
        else cout << 1;
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