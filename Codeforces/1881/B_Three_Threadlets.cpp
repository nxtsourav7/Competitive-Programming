/**
 *	author 	: nxtsourav7
 *	created : 2023-12-27 19:34:57
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define nl "\n"
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
	vi v(3);
    each(v) cin >> it;

    int k = 3;
    int min_val = *min_element(all(v));
    for(int i=0; i<3; ++i) {
        if(v[i]%min_val!=0) {
            cout << "NO";
            return;
        }
        k -= (v[i]/min_val-1);
    }

    cout << (k>=0? "YES":"NO");
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