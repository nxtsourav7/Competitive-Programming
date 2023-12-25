/**
 *	author 	: nxtsourav7
 *	problem : Erase First or Second Letter
 *	created : 2023-12-24 21:54:41
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
	int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    unordered_set<char> cnt;
    for(int i=0; i<sz(s); ++i) {
        cnt.insert(s[i]);
        ans += sz(cnt);
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