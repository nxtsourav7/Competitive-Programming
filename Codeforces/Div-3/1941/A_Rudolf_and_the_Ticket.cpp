/**
 *	author 	: nxtsourav7
 *	created : 2024-03-11 20:41:56
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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> b(n), c(m);
        for(auto& it : b) {cin >> it;}
        for(auto& it : c) {cin >> it;}

        ll ans = 0;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(b[i]+c[j] <= k) ans++;
            }
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