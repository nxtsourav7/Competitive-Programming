/**
 *	author 	: nxtsourav7
 *	created : 2024-01-30 20:54:52
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl "\n"
#define f first 
#define s second
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
	int n;
    cin >> n;
    vi a(n), b(n);
    each(a) cin >> it;
    each(b) cin >> it;

    unordered_map<int, int> mp;
    for(int i=0; i<n; ++i) {
        mp[a[i]] = b[i];
    }

    sort(all(a));
    each(a) cout << it << " ";
    cout << "\n";
    each(a) cout << mp[it] << " ";
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