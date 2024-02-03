/**
 *	author 	: nxtsourav7
 *	created : 2024-02-03 22:02:30
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
    vector< pair<int, int> > a;
    for(int i=0; i<n; ++i) {
        int x;
        cin >> x;
        a.emplace_back(x, 1);
    }
    for(int i=0; i<n; ++i) {
        int x;
        cin >> x;
        a.emplace_back(x, -1);
    }
    vi c(n);
    each(c) cin >> it;

    sort(all(a));
    sort(rall(c));

    vi stk, len;
    int ans = 0;
    for(auto [x, t] : a) {
        if(t == 1) {
            stk.push_back(x);
        }
        else {
            len.push_back(x-stk.back());
            stk.pop_back();
        }
    }

    sort(all(len));
    for(int i=0; i<n; ++i) {
        ans += (len[i] * c[i]);
    }
    
    cout << ans ;
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