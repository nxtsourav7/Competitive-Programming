/**
 *	author 	: nxtsourav7
 *	created : 2024-12-01 09:44:06
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
    vector<int> a(n);
    for(auto &it : a) {
        cin >> it;
    }  

    for(int i = 0; i < n-1; ++i) {
        if(abs(a[i] - a[i + 1]) & 1) {
            cout << "-1";
            return;
        }
    }

    vector<int> ans;
    for(int i = 29; i >= 0; --i) {
        ans.push_back(1 << i);
    }

    // for zero(0) 
    if(~a[0] & 1) ans.push_back(1);
    
    cout << sz(ans) << endl;
    for(auto it : ans) {
        cout << it << " ";
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