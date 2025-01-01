/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 10:16:18
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve() {
    int n;
    cin >> n;

    if(__builtin_popcountll(n) == 1) {
        cout << "1\n" << n;
        return;
    }

    // key observation : reset bit from left to right satisfies the condition 
    cout << __builtin_popcountll(n) + 1 << endl;
    for(int i = 60; i >= 0; --i) {
        if(n & (1LL << i)) {
            cout << (n ^ (1LL << i)) << " ";
        }
    }
    cout << n << " ";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        solve();
        cout << endl;
    }
    return 0;
}