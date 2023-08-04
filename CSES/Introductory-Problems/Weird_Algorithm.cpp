/*
*	author 	: nxtsourav7
*	problem : Weired Algorithm
*	created : 2023-08-03 16:30:50
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
    cin >> n;
    cout << n << ' ';
    while(n!=1) {
        if(n%2==0) {
            n/=2;
            cout << n << ' ';
        }
        else {
            n = n*3+1;
            cout << n << ' ';
        }
    }
    cout << '\n';
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	// cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}
