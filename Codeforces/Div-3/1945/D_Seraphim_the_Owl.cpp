/**
 *	author 	: nxtsourav7
 *	created : 2024-03-19 15:08:44
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
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        for(auto& it : a) {cin >> it;}
        for(auto& it : b) {cin >> it;}

        int mnsm = __INT64_MAX__;
        int cursm = 0;
        for (int i=n-1; i>=0; --i) {
            if (i+1 <= m) {
                mnsm = min(mnsm, cursm+a[i]);
            }
            cursm += min(a[i], b[i]);
        }
        cout << mnsm;
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