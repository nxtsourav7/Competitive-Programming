/**
 *	author 	: nxtsourav7
 *	created : 2024-02-09 21:41:56
**/


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
        vector<int> a(n), b(n);
        for(auto& it : a) {cin >> it;}
        for(auto& it : b) {cin >> it;}

        vector<int> pos(n);
        iota(pos.begin(), pos.end(), 0);
        sort(pos.begin(), pos.end(), [&](int i, int j) {
            return (a[i]+b[i]) > (a[j]+b[j]);
        });
        ll ans = 0;
        for(int i=0; i<n; ++i) {
            int j = pos[i];
            if(i&1) {
                ans -= b[j]-1;
            }
            else {
                ans += a[j]-1;
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