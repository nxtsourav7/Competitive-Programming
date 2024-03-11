/**
 *	author 	: nxtsourav7
 *	created : 2024-03-11 22:00:03
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
        int n, m, x;
        cin >> n >> m >> x;
        set<int> st;
        st.insert(x);
        for(int i=0; i<m; ++i) {
            int r;
            char c;
            cin >> r >> c;
            set<int> tmp;
            for(auto& it : st) {
                if(c=='0' || c=='?') {
                    if(it+r <= n) tmp.insert(it+r);
                    else tmp.insert((it+r)%n);
                }
                if(c=='1' || c=='?') {
                    if(it > r) tmp.insert(it-r);
                    else tmp.insert(n-r+it);
                }
            }
            
            st = tmp;
        }

        cout << sz(st) << endl;
        for(auto& it : st) {
            cout << it << " ";
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