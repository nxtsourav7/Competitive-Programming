/*
*	author 	: nxtsourav7
*	problem : Watermelon
*	created : Dec/04/2022 15:13
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int w;
  cin >> w;

  if(w%2 == 0 && w!=2) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
	// changed file
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