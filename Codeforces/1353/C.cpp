/*
*	author 	: nxtsourav7
*	problem : Board Moves
*	created : 2023/11/06 10:07:42
*/

#include<bits/stdc++.h>
using namespace std;


void solve() {
	long long n;
	cin >> n;
	
	long long sum = 0;
	
	for(long long i=3 ; i<=n ; i+=2) {
		sum += (((i*i) - ((i-2)*(i-2))) * (i/2));
	}
	
	cout << sum;
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
		cout << "\n";
	}

	return 0;
}
