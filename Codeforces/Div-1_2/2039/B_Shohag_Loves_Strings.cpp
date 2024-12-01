/**
 *	author 	: nxtsourav7
 *	created : 2024-11-23 21:00:22
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
    string s;
    cin >> s;

    for(int i = 0; i < sz(s) - 1; ++i) {
        if(s[i] == s[i + 1]) {
            cout << s[i] << s[i];
            return;
        }
    }

    for(int i = 0; i < sz(s) - 2; ++i) {
        if(s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i +2]) {
            cout << s[i] << s[i + 1] << s[i + 2];
            return;
        }
    }

    cout << -1;
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