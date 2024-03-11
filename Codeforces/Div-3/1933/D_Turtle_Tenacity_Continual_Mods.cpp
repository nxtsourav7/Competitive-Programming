/**
 *	author 	: nxtsourav7
 *	created : 2024-02-27 22:32:37
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

        int mn = *min_element(all(v));
        int mn_cnt = 0;
        for(auto& it : v) {
            if(it == mn) {
                mn_cnt++;
            }
        }

        if(mn_cnt == n) {
            cout << "NO";
            return;
        }
        else if(mn_cnt == 1) {
            cout << "YES";
            return;
        }

        for(int i=0; i<n; ++i) {
            if(v[i]!=mn and v[i]%mn != 0) {
                cout << "YES";
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