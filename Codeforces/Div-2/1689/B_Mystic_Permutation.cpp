/**
 *	author 	: nxtsourav7
 *	created : 2024-12-21 03:32:34
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
#define print(x) for(auto i : x) cout << i << " "; 
void solve() {
    int N;
    cin >> N;
    vector<int> A(N), ans(N);
    // for(auto &x : A) cin >> x;

    // if(N == 1) {
    //     cout << -1;
    //     return;
    // }

    // set<int> ST;
    // for(int i = 0; i < N; ++i) {
    //     for(int j = 1; j <= N; ++j) {
    //         if(A[i] != j and ST.find(j) == ST.end()) {
    //             ans[i] = j;
    //             ST.insert(j);
    //             break;
    //         }
    //     }
    // }

    // for(int i = 0; i < N; ++i) {
    //     if(ans[i] == 0) {
    //         ans[i] = i + 1;
    //         swap(ans[i], ans[i - 1]);
    //     }
    // }

    // for(auto it : ans) {cout << it << " ";}
    // i found O(n^2) solution but can solve in O(n) by following way

    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        ans[i] = i + 1;
    }

    if(N == 1) {
        cout << -1;
        return;
    }

    for(int i = 0; i < N; ++i) {
        if(A[i] == ans[i]) {
            if(i + 1 < N) swap(ans[i], ans[i + 1]);
            else swap(ans[i], ans[i - 1]);
        }
    }

    print(ans);
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