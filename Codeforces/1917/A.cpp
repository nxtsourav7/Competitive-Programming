/**
 *	author 	: nxtsourav7
 *	problem : Least Product
 *	created : 2023-12-24 20:47:18
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
    vi v(n);
    int odd = 0;
    bool zero = false;
    each(v) {
        cin >> it;
        if(it == 0) {
            zero = true;
        }
        if(it < 0) {
            odd++;
        }
    }

    if(zero) {
        cout << 0;
        return;
    }

    if(odd%2==1) {
        cout << 0;
    }
    else {
        cout << 1 << endl;
        cout << 1 << " " << 0;
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