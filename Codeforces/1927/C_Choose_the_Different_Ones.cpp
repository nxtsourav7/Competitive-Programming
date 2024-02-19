/**
 *	author 	: nxtsourav7
 *	created : 2024-02-17 23:25:35
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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(auto& it : a) {cin >> it;}
        for(auto& it : b) {cin >> it;}

        unordered_set<int> as, bs, ans;
        for(int i=0; i<n; ++i) {
            if(a[i] <= k) {
                as.insert(a[i]);
                ans.insert(a[i]);
            }
        }
        for(int i=0; i<m; ++i) {
            if(b[i] <= k) {
                bs.insert(b[i]);
                ans.insert(b[i]);
            }
        }
        if(sz(ans)==k && sz(as)>=(k/2) && sz(bs)>=(k/2)) {
            cout << "YES";
        }
        else {
            cout << "NO";
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