/*
*	author 	: nxtsourav7
*	problem : Tales of a Sort
*	created : 2023-08-05 20:42:27
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> v(n);

	for(auto &a : v) cin >> a;

	vector<int> srt(v);

	sort(srt.begin(),srt.end());

	int mx = 0;
	for(int i= 0 ; i<n ; i++) {
		if(srt[i] != v[i]) {
			mx = max(mx,v[i]);
		}
	}

	cout << mx << '\n';
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
