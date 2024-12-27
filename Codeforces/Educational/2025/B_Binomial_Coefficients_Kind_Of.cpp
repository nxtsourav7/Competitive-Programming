/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 13:29:38
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

const int mod = 1e9 + 7;

long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;  
    vector<int> A(n), B(n);
    for(auto &x : A) cin >> x;
    for(auto &x : B) cin >> x;

    for(int i = 0; i < n; ++i) {
        cout << binpow(2, B[i]) << endl;
    }
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}