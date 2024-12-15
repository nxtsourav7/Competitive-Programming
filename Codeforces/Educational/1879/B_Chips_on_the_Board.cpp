/**
 *	author 	: nxtsourav7
 *	created : 2024-12-15 11:36:02
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
    vector<int> a(n), b(n);
    for(auto &it : a) {cin >> it;}
    for(auto &it : b) {cin >> it;}

    int min_a = *min_element(all(a));
    int min_b = *min_element(all(b));

    int sum_a = 0, sum_b = 0;
    for(int i = 0; i < n; ++i) {
        sum_a += (min_b + a[i]);
        sum_b += (min_a + b[i]);
    }

    cout << min(sum_a, sum_b);
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