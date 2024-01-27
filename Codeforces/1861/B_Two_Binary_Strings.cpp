/**
 *	author 	: nxtsourav7
 *	created : 
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
    string a,b;
    cin >> a >> b;

    // if(a==b) {
    //     cout << "YES";
    //     return;
    // }

    for(int i=1; i<sz(a); ++i) {
        if((a[i]=='1' && b[i]=='1') && (a[i-1]=='0' && b[i-1]=='0')) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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