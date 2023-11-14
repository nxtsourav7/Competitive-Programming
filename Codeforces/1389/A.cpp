/*
*	author 	: nxtsourav7
*	problem : LCM Problem
*	created : 2023-11-14 18:12:05
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
	int l , r;
    cin >> l >> r;

    if(2*l <= r) {
        cout << l << " " << 2*l;
    }
    else {
        cout << "-1 -1"; 
    }
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
