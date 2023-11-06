/*
*	author 	: nxtsourav7
*	problem : Most Unstable Array
*	created : 2023/11/06 09:05:33
*/

#include<bits/stdc++.h>
using namespace std;


void solve() {
	long long n , m ;
	cin >> n >> m;
	
	if(n == 1) {
		cout << "0";
		return;
	}
	
	if(n == 2) {
		cout << m;
		return;
	}
	
	cout << 2*m; 
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
