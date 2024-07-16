/**
 *  author : nxtsourav7
 *  created : 2024-07-15 21:01:32
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
        int n; cin >> n;
        string s;
        cin >> s;

        if(s[0] == '1' and s[sz(s)-1] == '1') {
            cout << "Yes";
            return;
        }
        for(int i = 0; i+1 < n; ++i) {
            if(s[i] == '0' and s[i+1] == '0') s[i] = 'x';
        }
        int one = 0; 
        int zero = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '1') one++;
            if(s[i] == '0') zero++;
        }
        if(one > zero) cout << "Yes";
        else cout << "No";

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