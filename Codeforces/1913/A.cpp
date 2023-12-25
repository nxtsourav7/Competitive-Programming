/**
 *	author 	: nxtsourav7
 *	problem : Rating Increase
 *	created : 2023-12-18 20:38:51
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
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;


auto solve = []() {
	string s;
    cin >> s;

    string before;
    before += s[0];
    int i=1;
    for(i=1; i<sz(s); ++i) {
        if(s[i]=='0') {
            before += s[i];
        }
        else {
            break;
        }
    }

    if(i==sz(s)) {
        cout << -1;
        return;
    }


    string after = s.substr(i,sz(s)-1);

    int a = stoi(before);
    int b = stoi(after);

    if(b>a) cout << a << " " << b;
    else cout << -1;
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