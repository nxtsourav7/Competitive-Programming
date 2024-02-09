/**
 *	author 	: nxtsourav7
 *	created : 2024-02-09 17:40:35
**/
// N.B : got tle with unordered_map cause it hacked .. but map(sorted_map) accepted
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define sz(x) x.size()


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

        map<ll, bool> mp;
        mp[0] = true;
        ll sum = 0;
        for(int i=0; i<n; ++i) {
            if(i&1) v[i] *= -1;

            sum += v[i];
            if(mp[sum]) {
                cout << "YES";
                return;
            }

            mp[sum] = true;
        }

        cout << "NO";
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