/**
 *	author 	: nxtsourav7
 *	created : 2024-02-28 09:05:34
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
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto& it : v) {cin >> it;}

        string ans = "";
        vector<int> alpha(27, 0);
        for(int i=0; i<n; ++i) {
            for(int j=1; j<=26; ++j)  {
                if(v[i] == alpha[j]) {
                    ans += 'a'+j-1;
                    alpha[j]++;
                    break;
                }
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