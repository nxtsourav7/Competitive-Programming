/**
 *	author 	: nxtsourav7
 *	created : 2024-02-09 16:36:26
**/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define sz(x) x.size()

// PBDS -->
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<
int,
null_type,
less_equal<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
// <--

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for(auto& [a, b] : v) cin >> a >> b;

        ranges::sort(v);
        ordered_set st;
        ll ans = 0;
        for(auto& [a, b] : v) {
            ans += sz(st)-st.order_of_key(b);
            st.insert(b);
        }

        cout << ans;
    };


    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}