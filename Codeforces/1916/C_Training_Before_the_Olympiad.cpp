/**
 *	author 	: nxtsourav7
 *	created : 2024-02-28 12:04:31
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
        int n; cin >> n;
        vector<int> v(n);
        for(auto& it : v) {cin >> it;}
        
        int odd = 0;
        ll sum = 0;
        vector<ll> ans(n);
        for(int i=0; i<n; ++i) {
            sum += v[i];
            odd += (v[i] & 1);

            if(i>0 and (odd%3 == 1)) {
                ans[i] = sum-(odd/3)-1;
            }
            else {
                ans[i] = sum-(odd/3);
            }
        }
        for(auto it : ans) {cout << it << " ";}
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