/*
*	author 	: nxtsourav7
*	problem : 
*	created : 
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;
    set<int> s;
    for(int i=0 ; i<n ; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << '\n';
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
