/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 11:59:18
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
    int n; cin >> n;
    string s, r;
    cin >> s >> r;

    int one = 0, zero = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') one += 1; 
        else zero += 1;
    }
    // int zero = count(all(s), '0');

    for(int i = 0; i < n - 1; ++i) {
        if(one == 0 || zero == 0) {
            cout << "NO";
            return;
        }
        if(r[i] == '1') zero -= 1;
        else one -= 1;
    }

    cout << "YES";
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