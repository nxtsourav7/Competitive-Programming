/**
 *	author 	: nxtsourav7
 *	created : 2024-12-09 03:49:46
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
    string s;       cin >> s;

    int cnt = 0;
    int len = sz(s);
    for(int i = sz(s); i >= 0; --i) {
        if(s[i] == '\\') {
            len = i;
            cnt++;
        }
        
    }

    cout << sz(s) - cnt + 1 << " " << len;
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