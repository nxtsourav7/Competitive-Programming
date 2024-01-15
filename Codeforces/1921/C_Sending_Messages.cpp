/**
 *	author 	: nxtsourav7
 *	created : 2024-01-15 21:25:26
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
	int n,f,a,b;
    cin >> n >> f >> a >> b;
    inVec(v,n);

    int in_pos = 0;
    for(int i=0; i<n; ++i) {
        int cost = min(b,(v[i]-in_pos)*a);
        in_pos = v[i];

        if(f-cost<=0) {
            cout << "NO";
            return;
        }
        f -= cost;
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