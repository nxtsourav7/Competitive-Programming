/**
 *	author 	: nxtsourav7
 *	created : 2024-01-07 23:05:40
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
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


auto solve = []() {
	int n;
    cin >> n;
    vi v(n);
    each(v) cin >> it;

    int ans=0;
    int sL=INT_MAX,tL=INT32_MAX;

    for(int i=0; i<n; ++i) {
        if(sL>tL) swap(sL,tL);

        if(v[i]<=sL) {
            sL=v[i];
        }
        else if(v[i]<=tL) {
            tL=v[i];
        }
        else {
            ans++;
            sL=v[i];
        }  
    }

    cout << ans;
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