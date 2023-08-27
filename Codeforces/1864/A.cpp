/*
*	author 	: nxtsourav7
*	problem : Increasing and Decreasing
*	created : 2023-08-26 20:39:43
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
	int x , y , n;
    cin >> x >> y >> n;

    int sum = n*(n-1)/2;

    if(x+sum > y) {
        cout << "-1\n";
        return;
    }

    int m =y - ((n-1)*(n-2)/2);

    cout << x <<" " << m << " ";

    for(int i=n-2 ; i>=1 ; i--) {
        m += i;

        cout << m << " ";
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
