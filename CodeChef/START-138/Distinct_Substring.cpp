/**
 *	author 	: nxtsourav7
 *	created : 2024-06-12 20:50:03
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
        int n, k;
        cin >> n >> k;

        if(k == 1) {
            cout << "YES";
            return;
        }
        int need_zero = (k * (k+1) ) / 2;
        if(n >= (need_zero + k - 1)) {
            cout << "YES";
        }
        else cout << "NO";
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