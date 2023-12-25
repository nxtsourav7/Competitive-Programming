/**
 *	author 	: nxtsourav7
 *	problem : Candies Division
 *	created : 2023-12-25 22:31:05
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
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;


auto solve = []() {
	int n,k;
    cin >> n >> k;

    cout << n- max((int)0,(n%k - k/2));
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