/**
 *  author : nxtsourav7
 *  created : 2024-07-11 20:56:16   
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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> ans(n);
        ans[0] = n, ans[n-1] = m;
        int tmp = 1;
        for(int i = n-2; i >= n-m; --i) {
            ans[i] = m - tmp;
            tmp++;
        }
        tmp = 1;
        for(int i = 1; i < n-m; ++i) {
            ans[i] = n - tmp;
            tmp++;
        }
        for(auto& it : ans) {
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