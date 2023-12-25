/**
 *	author 	: nxtsourav7
 *	problem : Odd Queries
 *	created : 2023-12-26 01:30:17
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
	int n,q;
    cin >> n >> q;
    vi v(n);
    each(v) cin >> it;

    int sum = v[0];
    vi pre_sum(n+1,0);
    pre_sum[1] = v[0];
    for(int i=1; i<n; ++i) {
        pre_sum[i+1] = sum+v[i];
        sum += v[i];
    }

    while(q--) {
        int l,r,k;
        cin >> l >> r >> k;

        int ans = pre_sum[l-1] + sum-pre_sum[r] + (r-l+1)*k;

        if(ans&1) cout << "YES\n";
        else cout << "NO\n";       
    }
};


int32_t main() {
	fastIO;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        // cout << endl;
	}
	return 0;
}