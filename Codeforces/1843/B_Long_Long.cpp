/**
 *	author 	: nxtsourav7
 *	created : 2023-12-27 14:51:22
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
    each(v) cin >> it;

    int sum = 0;
    int cnt = 0;
    int neg = 0;
    for(int i=0; i<n; ++i) {
        sum += abs(v[i]);
        if(v[i]<0 || (v[i]==0 && neg!=0)) {
            neg++;
        }
        else {
            if(neg) {
                cnt++;
            }
            neg = 0;
        }
    }
    if(neg) {//if last digit negetive
        cnt++;
    }

    cout << sum << " " << cnt;


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