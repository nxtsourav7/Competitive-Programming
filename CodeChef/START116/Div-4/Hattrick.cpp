/**
 *	author 	: nxtsourav7
 *	created : 
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
	char over[7];
    for(int i=1; i<=6; ++i) cin >> over[i];

    int cnt = 0,ans = 0;
    for(int i=1; i<=6; ++i) {
        if(over[i]=='W') {
            if(over[i-1]=='W') cnt++;
            else cnt = 1;
        }
        ans = max(ans,cnt);
    }

    cout << (ans>=3? "YES":"NO");
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