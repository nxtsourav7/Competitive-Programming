/**
 *	author 	: nxtsourav7
 *	created : 2024-12-16 19:51:46
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

    if(n == 1) cout << 1;
    else if(n & 1) cout << - 1; // total sum always divided by n
    else {
        for(int i = 1; i <= n/2; ++i) {
            cout << i*2 << " " << i*2 - 1 << " ";
        }
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