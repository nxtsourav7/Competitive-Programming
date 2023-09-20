/*
*	author 	: nxtsourav7
*	problem : Perfect Permutation
*	created : 2023-09-20 21:43:05
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
	read(x);
    if(x%2==1) {
        cout << "-1\n";
        return;
    }
    for(int i=0 ; i<x ; ++i) {
        if(i%2 == 0) {
            cout << i+2 << " ";
        }
        else {
            cout << i << " ";
        }
    }
    cout << "\n";
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
// 	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}