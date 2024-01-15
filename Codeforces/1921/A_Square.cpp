/**
 *	author 	: nxtsourav7
 *	created : 2024-01-15 20:44:06
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl '\n'
#define ff first 
#define ss second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


#define read(n) int n;cin >> n;
#define inVec(x,n) vi x(n);each(x) cin >> it;


auto solve = []() {
    vi v;

    vpii in(4);
	for(int i=0; i<4; ++i) {
        cin >> in[i].first >> in[i].second;
    }

    for(int i=1; i<4; ++i) {
        int cur = (in[0].first-in[i].first)*(in[0].first-in[i].first) + (in[0].second-in[i].second)*(in[0].second-in[i].second);
        cur = sqrt(cur);

        v.push_back(cur);
    }

    cout << (*min_element(all(v)) ) * (*min_element(all(v)) );
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