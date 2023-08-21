/*
*	author 	: nxtsourav7
*	problem : Phoenix and Balance
*	created : 2023-08-21 07:17:48
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

    ll sum1 = 0;
    ll sum2 = 0;

    sum1 += (1<<x);

    for(int i=1 ; i<x/2 ; ++i) {
        sum1 += (1<<i);
    } 
    for(int i=x/2 ; i<x ; ++i) {
        sum2 += (1<<i);
    }

    cout << sum1 - sum2 << '\n';
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
