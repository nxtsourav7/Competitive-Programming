/**
 *	author 	: nxtsourav7
 *	created : 2024-12-13 12:44:44
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

    int a = s[0] - '0';
    int b = s[2] - '0';

    if(a > b) cout << a << ">" << b;
    else if(a < b) cout << a << "<" << b;
    else cout << a << "=" << b;
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