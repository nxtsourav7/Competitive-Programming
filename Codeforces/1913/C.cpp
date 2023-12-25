/**
 *	author 	: nxtsourav7
 *	problem : Game with Multiset
 *	created : 2023-12-19 12:02:25
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long 
#define double long double


#define vi vector<int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;


auto solve = []() {
	int m;
    cin >> m;

    vi v(30,0);
    for(int i=0; i<m; ++i) {
        int x,y;
        cin >> x >> y;

        if(x==1) {
            v[y]++;
        }
        else {
            
            for(int j=29; j>=0; --j) {
                int k = y>>j;
                int take = min(k , v[j]);
                y -= take << j;
            }

            if(y==0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }  
        }
    }
};


int32_t main() {
	fastIO;
	// cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        // cout << endl;
	}
	return 0;
}