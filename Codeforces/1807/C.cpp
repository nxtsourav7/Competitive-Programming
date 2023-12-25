/**
 *	author 	: nxtsourav7
 *	problem : Find and Replace
 *	created : 2023-12-25 23:04:42
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
    string s;
    cin >> n >> s;

    vi alph(26,-1);
    for(int i=0; i<n; ++i) {
        int idx = s[i]-'a';
        if(alph[idx]==-1) {
            alph[idx] = i%2;
        }
        else {
            if(alph[idx]!=i%2) {
                cout << "NO";
                return;
            }
        }   
    }

    cout << "YES";
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