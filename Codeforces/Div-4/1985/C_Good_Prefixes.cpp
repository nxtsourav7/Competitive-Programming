/**
 *	author 	: nxtsourav7
 *	created : 2024-06-11 20:51:22
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
        int ans = 0;
        int sum = 0;
        int mx = -1;
        while(n--) {
            int x;
            cin >> x;
            mx = max(mx, x);
            sum += x;
            if(2*mx == sum) ans++;
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