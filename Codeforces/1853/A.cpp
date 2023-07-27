/*
*	author 	: nxtsourav7
*	problem : Desorting
*	created : Jul/23/2023 21:08:26
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n;
    cin >> n;
    vector<int>v(n);

    for(auto &a : v) cin >> a;
    int min = 1e9;
    for(int i=0 ; i<n-1 ; i++) {
        if(v[i+1]-v[i] < 0) {
            cout << 0 <<'\n';
            return ;
        }

        if(v[i+1] - v[i] <= min) {
            min = v[i+1] - v[i];
        }

        
    }

    cout << min /2 +1 << '\n';
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