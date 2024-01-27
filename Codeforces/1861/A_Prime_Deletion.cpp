/**
 *	author 	: nxtsourav7
 *	created : 2024-01-16 23:11:02
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
	vi v = {13,23,31,41,53,61,71,83,97};

    string s;
    cin >> s;

    cout << v[(int)s[0]-49];
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