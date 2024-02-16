/**
 *	author 	: nxtsourav7
 *	created : 2024-02-16 12:14:35
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
        int x, n;
        cin >> x >> n;

        int ans = 1;
        for(int i=1; i<=sqrt(x); ++i) {
            if(x%i == 0 ) {
                if(x/i < n) break;
                if(i < n) ans = i;
                else {
                    ans = x/i;
                    break;
                }
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