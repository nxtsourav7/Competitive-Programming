/**
 *	author 	: nxtsourav7
 *	created : 2024-06-12 23:22:05
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    auto nxtsourav7 = []()->void {
        int n; cin >> n;
        vector<int> arr(n);
        for(auto& it : arr) {cin >> it;}
        vector<int> prefix(n+1, 0);
        for(int i = 0; i < n; ++i) {
            prefix[i+1] = prefix[i] + arr[i];
        }
        // for(auto& it : prefix) {cerr << it << " ";}
        int q; cin >> q;
        while(q--) {
            int l, u;
            cin >> l >> u;
            int target = prefix[l-1] + u;
            int lo_bnd = lower_bound(all(prefix), target) - prefix.begin();
            // cout << lo_bnd << "LOW" << endl;
            if(lo_bnd <= l) cout << lo_bnd << " ";
            else if(lo_bnd > n) cout << n << " ";
            else {
                if(prefix[lo_bnd] - target > target - prefix[lo_bnd-1]) {
                    cout << lo_bnd - 1 << " ";
                }
                else cout << lo_bnd << " ";
            }
        }

    };

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}