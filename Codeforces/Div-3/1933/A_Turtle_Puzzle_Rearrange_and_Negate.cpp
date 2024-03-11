/**
 *	author 	: nxtsourav7
 *	created : 2024-02-27 20:38:12
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
        vector<int> arr(n);
        ll ans = 0;
        for(auto& it : arr) {
            cin >> it;
            if(it < 0) {
                it *= -1;
            }
            ans += it;
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