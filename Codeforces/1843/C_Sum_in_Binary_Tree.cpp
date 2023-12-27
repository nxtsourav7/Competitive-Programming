/**
 *	author 	: nxtsourav7
 *	created : 2023-12-27 18:49:02
**/

#include<bits/stdc++.h>
using namespace std;


#define f first 
#define s second
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


int T=1;


auto solve = []() {
	int n;
    cin >> n;

    int ans = 0;
    while(n) {
        ans += n;
        n = n>>1;
    }

    cout << ans;
};


int32_t main() {
	fastIO;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}