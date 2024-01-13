/**
 *	author 	: nxtsourav7
 *	created : 2024-01-13 20:49:27
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl '\n'
#define ff first 
#define ss second
#define int long long 
#define double long double


#define each(x) for(auto &it:x)
#define f0r(i,n) for(int i=0; i<=n-1; ++i)
#define r0f(i,n) for(int i=n-1; i>=0; --i)
#define fer(i,a,n) for(int i=a; i<=n; ++i)
#define ref(i,a,n) for(int i=n; i>=a; --i)


#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define sz(x) (int)x.size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


#define read(n) int n;cin >> n;
#define inVec(x,n) vi x(n);each(x) cin >> it;


auto solve = []() {
	int tt;
    cin >> tt;

    int mx1 = INT64_MIN;
    int mn2 = INT64_MAX;
    vi v;
    while(tt--) {
        int a,x;
        cin >> a >> x;

        if(a==1) {
            mx1 = max(mx1,x);
        }
        else if(a==2) {
            mn2 = min(mn2,x);
        }
        else {
            v.push_back(x);
        }
    }


    int cnt = 0;
    
    // for(int i=mx1; i<=mn2; ++i) {
    //     if(find(v.begin(), v.end(), i) != v.end()) {
    //         cnt++;
    //     }
    // }

    each(v) {
        if(it>=mx1 && it<=mn2) {
            cnt++;
        }
    }

    if(mn2<mx1) {
        cout << 0;
    }
    else {
        cout << mn2-mx1+1-cnt;
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