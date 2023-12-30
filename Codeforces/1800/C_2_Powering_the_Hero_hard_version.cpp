/**
 *	author 	: nxtsourav7
 *	created : 2023-12-30 10:49:28
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
 
    int ans = 0;
    ordered_set<int> ost;
    for(int i=0; i<n; ++i) {
        int x;
        cin >> x;
        if(x) ost.insert(x);
        else {
			if(!ost.empty()) {
                ans += *ost.rbegin();
                ost.erase(ost.rbegin());
            }
        }
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