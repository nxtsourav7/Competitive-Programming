/**
 *	author 	: nxtsourav7
 *	created : 2024-01-27 23:05:04
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
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
	int a,b,c;
    cin >> a >> b >> c;

    cout << ((a+ceil((double)c/2) > b+c/2)? "First" : "Second");
};


int32_t main() {
	fastIO;
    int T=1;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}