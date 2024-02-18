/**
 *	author 	: nxtsourav7
 *	created : 2024-02-17 21:08:34
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
        for(int i=0; i<n; ++i) {
            cin >> v[i];
            v[i] += i+1;
        }

        ranges::sort(v, greater<>());
        for(int i=1; i<n; ++i) {
            v[i] = min(v[i], v[i-1] -1);
        }
        for(auto& it : v) {
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