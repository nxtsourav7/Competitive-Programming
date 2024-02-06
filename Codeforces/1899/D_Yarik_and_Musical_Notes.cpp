/**
 *	author 	: nxtsourav7
 *	created : 2024-02-07 03:15:31
**/

#include<bits/stdc++.h>

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()

using namespace std;


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto& it : v) {
            cin >> it;
        }

        int ans = 0;
        map<int, int> mp;
        for(int i=0; i<n; ++i) {
            ans += mp[v[i]];
            if(v[i]==1) ans += mp[2];
            else if(v[i]==2) ans += mp[1];
            mp[v[i]]++;
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