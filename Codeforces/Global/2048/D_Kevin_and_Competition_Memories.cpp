/**
 *	author 	: nxtsourav7
 *	created : 2024-12-19 23:48:34
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &it : a) {cin >> it;}
    for(auto &it : b) {cin >> it;}

    int rtng = a[0];
    sort(all(a));
    
    vector<int> rank(m);
    for(int i = 0; i < m; ++i) {
        if(b[i] <= rtng) rank[i] = 1;
        else {
            int lo = lower_bound(all(a), b[i]) - a.begin();
            int better_is = n - lo;
            rank[i] = 1 + better_is;
        }
    }

    sort(all(rank));
    
    for(int i = 1; i <= m; ++i) {
        int sum = 0;
        for(int j = i - 1; j < m; j+=i) {
            sum += rank[j];
        }
        cout << sum << " ";
    }

    // for(auto it : rank) {cerr << it << " ";}
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