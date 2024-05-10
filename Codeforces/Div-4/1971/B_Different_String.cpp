/**
 *	author 	: nxtsourav7
 *	created : 2024-05-10 20:38:32
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
        string s;
        cin >> s;
        // solve here
        for(int i = 0; i+1 < sz(s); ++i) {
            if(s[i] != s[i+1]) {
                swap(s[i], s[i+1]);
                cout << "YES" << endl;
                cout << s;
                return;
            }
        }
        cout << "NO";
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