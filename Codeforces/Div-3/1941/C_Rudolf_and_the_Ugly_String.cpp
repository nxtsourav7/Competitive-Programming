/**
 *	author 	: nxtsourav7
 *	created : 2024-03-11 21:27:52
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
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        for(int i=0; i+2<n; ++i) {
            if(s.substr(i,3)=="map" || s.substr(i,3)=="pie") {
                s[i+2] = 'x';
                ans++;
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