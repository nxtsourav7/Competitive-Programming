/*
*	author 	: nxtsourav7
*	problem : Good Array
*	created : 2023-08-05 21:06:59
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> v(n);

	for(auto &a : v) cin >> a;

	if(v.size() == 1) {
		cout << "NO\n";

		return ; 
	}

	long long sum = 0;
	int one = 0;
	for(int i=0 ; i<n ; i++) {
		if(v[i] == 1) {
			one ++;
		}

		sum+=v[i];

	}

	if(sum >= (one+n)) {
		cout << "YES\n";
		return;
	}

	cout << "NO\n";

}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		solve();
	}

	return 0;
}
