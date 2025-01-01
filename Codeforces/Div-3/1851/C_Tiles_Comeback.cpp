/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 11:29:25
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
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    
    int pre = n - 1;
    int suf = - 1, c0 = 0, c1 = 0;
    for(int i = 0; i < n; ++i) {
        if(a[0] == a[i] and c0 + 1 == k) pre = i;
        if(a[n - 1] == a[n - i - 1] and c1 + 1 == k) suf = n - i - 1;

        if(a[i] == a[0]) c0 += 1;
        if(a[n - i - 1] == a[n - 1]) c1 += 1;
    }
    if(suf != -1 and a.front() == a.back()) cout << "YES";
    else cout << (pre < suf ? "YES" : "NO");

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