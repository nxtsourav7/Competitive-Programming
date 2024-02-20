/**
 *	author 	: nxtsourav7
 *	created : 2024-02-20 12:06:29
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(auto& it : a) {cin >> it;}
        for(auto& it : b) {cin >> it;}

        int ans = 0;
        sort(all(a));
        sort(all(b));
        int j=0;
        for(int i=0; i<n; ++i) {
            for(; j<m; ++j){
                if(a[i]+k < b[j]) {
                    break;
                }
                if(a[i]-k <= b[j] and a[i]+k >= b[j]) {
                    ans++;
                    j++;
                    break;
                }
            }
        }

        cout << ans;
    };


    bool Q = false;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}