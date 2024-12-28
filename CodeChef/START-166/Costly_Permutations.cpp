/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 21:54:07
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
    vector<int> P(n);
    for(auto &x : P) {
        cin >> x;
        x--;
    }

    // for(auto &x : P) {
    //     cerr << x << " ";
    // }cerr << endl;

    vector<int> A(n);
    int one = 0, two = 0;
    for(int i = 0; i < n; ++i) {
        if(P[i] == i) {
            A[i] = 1;
            one += 1;
        }
        else if(P[P[i]] == i) {
            A[i] = 2;
            two += 1;
        }
    }

    // for(auto &x : A) {
    //     cerr << x << " ";
    // }cerr << endl;

    int tmp = n - (one + two);
    // cerr << one << " " << two << " " << tmp << endl;
    int ans = (tmp + 1) * one;
    // cerr << ans << endl;
    // ans += ((tmp + 2) * two);
    // cout << tmp + 2 << endl;
    cout << ans + (tmp + 2) * two;
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