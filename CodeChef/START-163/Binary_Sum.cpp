/**
 *	author 	: nxtsourav7
 *	created : 2024-12-04 20:35:40
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
    int n, k;
    cin >> n >> k;

    if(n & 1) {
        if(k == (n / 2) || k == (n / 2 + 1)) cout << "YES";
        else cout << "NO";
    }
    else {
        if(k == (n / 2)) cout << "YES";
        else cout << "NO";
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