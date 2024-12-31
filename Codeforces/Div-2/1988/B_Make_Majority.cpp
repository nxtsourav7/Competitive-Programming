/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 02:36:45
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
    string s;
    cin >> n >> s;

    // key observation : "0000000" as "0"
    int zero = 0, one = 0;
    bool sq = false;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0' and !sq) {
            zero += 1;
            sq = true;
        }
        if(s[i] == '1'){
            one += 1;
            sq = false;
        }
    }
    cout << (one > zero ? "YES" : "NO");
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