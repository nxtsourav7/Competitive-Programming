/**
 *	author 	: nxtsourav7
 *	problem : The number on the board
 *	created : 2023-12-21 00:54:03
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
	int k,n;
    cin >> k >> n;

    int di_sum = 0;
    while(n) {
        di_sum += n%10;
        n /= 10;
    }

    cout << max((int)0,(k-di_sum));
};


int32_t main() {
	fastIO;
	// cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}