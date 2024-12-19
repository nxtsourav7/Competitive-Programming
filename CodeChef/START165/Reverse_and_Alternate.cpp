/**
 *	author 	: nxtsourav7
 *	created : 2024-12-18 21:33:50
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
    string s;
    cin >> s;

    int zero = 0, p0 = 0, p1 = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0') zero += 1;
    }

    int one = n - zero;
    if(abs(zero - one) > 1) {
        cout << "No";
        return;
    }

    for(int i = 0; i < n - 1; ++i) {
        if(s[i] == s[i + 1]) {
            if(s[i] == '0') p0 += 1;
            else p1 += 1;
        }
    }

    if(p1 > 1 || p0 > 1) cout << "No";
    else  cout << "Yes";
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