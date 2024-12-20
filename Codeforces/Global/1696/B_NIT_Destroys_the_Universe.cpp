/**
 *	author 	: nxtsourav7
 *	created : 2024-12-21 03:16:46
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
    cin >> N;
    vector<int> A;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if(x) A.push_back(i);
    }

    if(sz(A) == 0) cout << 0;
    else if(A.back() - A.front() + 1 == sz(A)) cout << 1;
    else cout << 2;
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