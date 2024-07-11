/**
 *  author : nxtsourav7
 *  created : 2024-07-10 09:12:32
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
        map<int, vector<int>> mods;
        for(int i = 0; i < n; ++i) {
            int x; cin >> x;
            mods[x % k].emplace_back(x / k);
        }  

        int odd = 0;
        int ans = 0;
        for(auto [key, arr] : mods) {
            sort(all(arr));
            int m = sz(arr);
            if(m & 1) {
                if(++odd > 1) break;
                vector<int> prefix(m + 1);
                for(int i = 0; i < m; ++i) {
                    prefix[i + 1] = arr[i] - prefix[i];
                }
                int best = INT64_MAX;
                for(int i = 0; i < m; ++i) {
                    int tmp = INT64_MAX;
                    if(i & 1) tmp = prefix[m] + prefix[i + 1] - prefix[i];
                    else tmp = prefix[m] - prefix[i + 1] + prefix[i];
                    best = min(best, tmp);
                }
                ans += best;
            }
            else {
                for(int i = 0; i < m; i+=2) {
                    ans += (arr[i + 1] - arr[i]);
                }
            }
        }
        if(odd > 1) cout << -1;
        else cout << ans;
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