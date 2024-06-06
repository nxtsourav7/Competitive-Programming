/**
 *	author 	: nxtsourav7
 *	created : 2024-06-06 22:26:40
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
        vector<int> a(n), b(n+1);
        for(auto& it : a) {cin >>it;}
        for(auto& it : b) {cin >> it;}

        int ans = 1;// append 
        int apn = __INT32_MAX__;
        int last = b[n];
        for(int i = 0; i < n; ++i) {
            ans += (abs(a[i] - b[i]));
            // int x = abs(a[i] - b[n]);
            if((last >= a[i] and last <= b[i]) || (last <= a[i] and last >= b[i])) {
                apn = 0;
            }
            else {
                apn = min(apn, abs(a[i] - last));
                apn = min(apn, abs(b[i] - last));
            }
        }
        cout << ans + apn;
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