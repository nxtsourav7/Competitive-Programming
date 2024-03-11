/**
 *	author 	: nxtsourav7
 *	created : 2024-02-28 09:13:15
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
        
        // pre_processing
        vector<int> pos(n+1);
        pos[n] = n;
        for(int i=n-2; i>=0; --i) {
            if(v[i] == v[i+1]) {
                pos[i+1] = pos[i+2];
            }
            else {
                pos[i+1] = pos[i+2]-1;
            }
        }

        int q; cin >> q;
        while(q--) {
            int L, R;
            cin >> L >> R;
            if(pos[L] == pos[R]) {
                cout << "-1 -1\n";
            }
            else {
                int upr = upper_bound(all(pos), pos[R]-1) - pos.begin();
                cout << upr-1 << " " << R << endl;
            }
        }
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