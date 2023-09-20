/*
*	author 	: nxtsourav7
*	problem : green_gold_dog, array and permutation
*	created : 2023-09-20 14:00:35
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define sz(a) (int)(a).size()
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n;
    cin >> n;

    vector< pair<ll,ll>>v(n);

    for(int i=0 ; i<n ; ++i) {
        ll x ;
        cin >> x;

        v[i].first = x;
        v[i].second = i;
    } 

    sort(v.rbegin(),v.rend());

   vector<ll>ans(n);

   for(int i=0 ; i<n ; ++i) {
        ans[v[i].second] = i+1;
   }

   for(auto a : ans) {
        cout << a << ' ';
   }
    cout << '\n';
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}
