/**
 *  author : nxtsourav7
 *  created : 2024-07-18 11:02:57
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
        string st, sq;
        cin >> st >> sq;

        int best = 0;
        for(int i = 0; i < sz(sq); ++i) {
            int pos = i;
            int cnt = 0;
            for(int j = 0; j < sz(st); ++j) {
                if(sq[pos] == st[j]) {
                    pos++;
                    cnt++;
                }
            }
            best = max(best, cnt);
        }
        cout << sz(sq) + sz(st) - best;
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