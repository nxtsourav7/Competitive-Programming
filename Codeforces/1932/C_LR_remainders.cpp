/**
 *	author 	: nxtsourav7
 *	created : 2024-02-19 06:37:05
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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for(auto& it : v) {cin >> it;}
        string s;
        cin >> s;

        int l = 0, r = n-1;
        for(int i=0; i<n; ++i) {
            if(s[i] == 'L') l++;
            else r--;
        }

        int mul = 1;
        vector<int> ans(n);
        for(int i=n-1; i>=0; --i) {
            if(s[i] == 'L') {
                l--;
                mul = (mul*(v[l] % m)) % m;
            }
            else {
                r++;
                mul = (mul*(v[r] % m)) % m;
            }
            ans[i] = mul;
        }
        for(auto& it : ans) {cout << it << " ";}
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