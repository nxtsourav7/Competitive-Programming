/**
 *	author 	: nxtsourav7
 *	created : 2024-06-23 14:16:30
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
 
        int ans = INT64_MAX;
        for(int mask = 1; mask < (1<<n); ++mask) {
            int grp1 = 0, grp2 = 0;
            for(int i = 0; i < n; ++i) {
                if(mask & (1<<i)) {
                    grp1 += arr[i];
                }
                else {
                    grp2 += arr[i];
                }
            }
            ans = min(ans, abs(grp1 - grp2));
        }
        cout << ans;
    };
 
    bool Q = false;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}