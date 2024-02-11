/**
 *	author 	: nxtsourav7
 *	created : 2024-02-11 23:10:14
**/


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto& it : v) {cin >> it;}

        ranges::sort(v);
        v.erase(unique(all(v)), v.end());

        int ans = 0;
        for(int i=0; i<sz(v); ++i) {
            int j = lower_bound(all(v), v[i]+n) - v.begin();
            ans = max(ans, j-i);
        }

        cout << ans;
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