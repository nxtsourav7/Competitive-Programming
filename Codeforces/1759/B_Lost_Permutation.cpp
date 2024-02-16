/**
 *	author 	: nxtsourav7
 *	created : 2024-02-16 09:10:41
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
        int m, sm;
        cin >> m >> sm;
        vector<int> v(m);
        for(auto& it : v) {cin >> it;}

        int mx = *max_element(all(v));
        int mx_sum = (mx * (mx+1)) /2;
        for(int i=0; i<m; ++i) {
            mx_sum -= v[i];
        }

        int tmp = mx+1;
        while(mx_sum <= sm) {
            if(mx_sum == sm) {
                cout << "YES";
                return;
            }
            mx_sum += tmp;
            tmp++;
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