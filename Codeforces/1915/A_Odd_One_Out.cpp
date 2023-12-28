/**
 *	author 	: nxtsourav7
 *	created : 2023-12-28 20:38:30
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
	int a,b,c;
    cin >> a >> b >> c;

    if(a==b) {
        cout << c;
    }
    else if(b==c) {
        cout << a;
    }
    else {
        cout << b;
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