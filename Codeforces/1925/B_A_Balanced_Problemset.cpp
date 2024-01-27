/**
 *	author 	: nxtsourav7
 *	created : 2024-01-27 20:56:01
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


auto solve = []() {
	int x,n;
    cin >> x >> n;

    int ans = 1;
    for(int i=1; i<=x; ++i) {
        if(x%i == 0 && x/i >= n) {
            ans = i;
        }
        if(x/i < n) {
            break;
        }
    }

    cout << ans ;
};


int32_t main() {
	fastIO;
	int T=1;
	cin >> T;
	/**
	 *	fuck rating !! 
	**/
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}