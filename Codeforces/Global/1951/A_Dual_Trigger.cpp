/**
 *	author 	: nxtsourav7
 *	created : 2024-12-14 15:24:32
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
    string s;
    cin >> s;
    s += '0';
    bool has_adj = false;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') {
            cnt++;
            if(s[i] == s[i + 1]) has_adj = true;
        }
    }

    if((cnt & 1 ) || (cnt == 2 and has_adj)) cout << "NO";
    else cout << "YES";
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