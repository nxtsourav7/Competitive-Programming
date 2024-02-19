/**
 *	author 	: nxtsourav7
 *	created : 2024-02-18 18:41:52
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
        vector<int> a(n);
        for(auto& it : a) {cin >> it;}
        
        ll ans = a[0];
        for(int i=1; i<n; ++i) {
            if((ans+1)%a[i] == 0) {
                ans++;
            }
            else {
                int cur = ceil((double)(ans+1)/a[i]);
                ans = a[i]*cur;
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