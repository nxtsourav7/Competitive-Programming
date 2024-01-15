/**
 *	author 	: nxtsourav7
 *	problem : Key races
 *	created : 2023-12-21 00:34:19
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
	int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int a = s*v1+2*t1;
    int b = s*v2+2*t2;
    if(a==b) {
        cout << "Friendship";
    }
    else if(a<b) {
        cout << "First";
    }
    else {
        cout << "Second";
    }
};


int32_t main() {
	fastIO;
	// cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}