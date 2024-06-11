/**
 *	author 	: nxtsourav7
 *	created : 2024-06-11 11:10:13 
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
        int one = INT32_MAX, two = INT32_MAX, three = INT32_MAX;
        while(n--) {
            int mnt; 
            string bit;
            cin >> mnt >> bit;
            if(bit == "01") one = min(one, mnt);
            if(bit == "10") two = min(two, mnt);
            if(bit == "11") three = min(three, mnt);
        }
        if(three == INT32_MAX and (one == INT32_MAX || two == INT32_MAX)) cout << -1;
        else cout << min(one+two, three);
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