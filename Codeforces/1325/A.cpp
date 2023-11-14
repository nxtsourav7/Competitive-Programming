/*
*	author 	: nxtsourav7
*	problem : EhAb AnD gCd
*	created : 2023-11-15 01:06:46
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
	int x;
    cin >> x;

    cout << 1 << " " << x-1;
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		d0();
        cout << "\n";
	}

	return 0;
}
