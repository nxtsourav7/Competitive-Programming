/*
*	author 	: nxtsourav7
*	problem : Swap and Reverse
*	created : 2023-08-27 07:50:42
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define sz(a) (int)(a).size()
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n , k;
    cin >> n >> k;
    string s;
    cin >> s;

    if(k%2 == 0) {
        sort(all(s));
        cout << s << "\n";
        return;
    }
    
    vector<char> even , odd;

    for(int i=0 ; i<n ; ++i) {
        if(i%2 == 0) {
            even.push_back(s[i]);
        }
        else {
            odd.push_back(s[i]);
        }
    }
    sort(all(even));
    sort(all(odd));

    for(int i=0 ; i<sz(even) ; ++i) {
        cout << even[i] ;
        if(i < sz(odd)) {
            cout << odd[i];
        }
    }
    cout << "\n";
    
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
