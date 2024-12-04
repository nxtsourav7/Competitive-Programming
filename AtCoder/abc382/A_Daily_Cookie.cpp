/**
 *	author 	: nxtsourav7
 *	created : 2024-11-30 18:02:40
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
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    int cookie = 0;
    for(auto it : s) {
        if(it == '@') cookie++;
    }

    int empty = n - cookie;
    cout << empty + d;
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