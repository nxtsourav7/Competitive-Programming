/**
 *	author 	: nxtsourav7
 *	problem : Make Almost Equal With Mod
 *	created : 2023-12-23 21:36:26
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
    cin >> n;
    vi a(n);
    each(a) cin >> it;

    int k = 2;
    while(true) {
        vector<int> b = a;
        for(int i = 0; i < n; ++i) {
            b[i] = b[i] % k;
        }
        sort(b.begin(), b.end());
        if(unique(b.begin(), b.end()) - b.begin() == 2) {
            cout << k;
            return;
        }
        k *= 2;
    }
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