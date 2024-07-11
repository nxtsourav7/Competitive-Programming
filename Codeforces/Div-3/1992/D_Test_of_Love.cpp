/**
 *  author : nxtsourav7
 *  created : 2024-07-11 21:34:30
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
        int n, jump , swim;
        cin >> n >> jump >> swim;
        string s;
        cin >> s;
        s = 'L'+s;

        int cnt_swim = 0;
        for(int i = 0; i <= n; ++i) {
            if(s[i] == 'L') {
                int wx = -1;
                bool flag = false;
                for(int j = jump; j > 0; j--) {
                    if(i + j > n) {
                        cout << "YES";
                        return;
                    }
                    if(s[i+j] == 'L') {
                        i += j-1;
                        flag = true;
                        break;
                    }
                    else if(s[i+j] == 'W') {
                        wx = max(wx, i+j);
                    }
                }
                if(!flag and wx == -1) {
                    cout << "NO";
                    return;
                }
                if(!flag) {
                    i = wx-1;
                }
            }
            else if(s[i] == 'W') {
                if(++cnt_swim > swim) {
                    cout << "NO";
                    return;
                }
            }
            else {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
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