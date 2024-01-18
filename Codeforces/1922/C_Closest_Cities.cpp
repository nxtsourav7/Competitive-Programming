/**
 *	author 	: nxtsourav7
 *	created : 2024-01-18 21:37:10
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
	int n;
    cin >> n;
    inVec(v,n);

    vi a(n+1,0),b(n+1,0);
    a[2] = 1;
    for(int i=1; i+1<n; ++i) {
        if(v[i+1]-v[i] < v[i]-v[i-1]) {
            a[i+2] = a[i+1]+1;
        }
        else a[i+2] = a[i+1] + v[i+1]- v[i];
    }

    b[n-1] = 1;
    for(int i=n-2;i>0; --i) {
        if(v[i+1]-v[i] > v[i]-v[i-1]) {
            b[i] = b[i+1]+1;
        }
        else b[i] = b[i+1]+v[i]-v[i-1];
    }

    // each(a) cout << it << " ";
    // cout << "\n";

    // each(b) cout << it << " ";

    int q;
    cin >> q;

    while(q--) {
        int x,y;
        cin >> x >> y;

        if(x<y) {
            cout << a[y]-a[x];
        }
        else {
            cout << b[y]-b[x];
        }
        cout << endl;
    }

};


int32_t main() {
	fastIO;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        // cout << endl;
	}
	return 0;
}