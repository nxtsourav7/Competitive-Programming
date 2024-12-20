/**
 *	author 	: nxtsourav7
 *	created : 2024-12-20 21:10:57
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
    int N;
    string S;
    cin >> N >> S;

    if(S[0] == 's') S[0] = '.';
    if(S[N - 1] == 'p') S[N - 1] = '.';

    set<char> SE;
    for(auto it : S) {
        if(it != '.') SE.insert(it);
    }

    if(sz(SE) <= 1) cout << "YES";
    else cout << "NO";
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