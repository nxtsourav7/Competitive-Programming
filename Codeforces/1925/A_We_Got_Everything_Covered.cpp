/**
 *	author 	: nxtsourav7
 *	created : 2024-01-27 20:48:35
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
	int n,k;
    cin >> n >> k;

    string s = "";
    char ch = 'a';
    while(k--) {
        s += ch;
        ch++;
    }

    string ans = "";
    while(n--) {
        ans += s;
    }
    cout << ans;
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