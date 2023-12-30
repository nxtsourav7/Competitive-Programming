/**
 *	author 	: nxtsourav7
 *	created : 2023-12-30 10:49:21
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

    int ans = 0;
    vector<int> v;
    for(int i=0; i<n; ++i) {
        int x;
        cin >> x;
        if(x) v.push_back(x);
        else {
            if(!v.empty()) {
                sort(all(v));
                ans += v.back();
                v.pop_back();
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