/**
 *	author 	: nxtsourav7
 *	created : 2024-03-11 20:56:12
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
        cin >> n;
        vector<int> v(n);
        for(auto& it : v) {cin >> it;}

        for(int i=0; i+2<n; ++i) {
            if(v[i]<0) {
                cout << "NO";
                return;
            }
            v[i+1] -= (v[i]*2);
            v[i+2] -= v[i];
            v[i] = 0;
        }

        for(auto& it : v) {
            if(it != 0) {
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