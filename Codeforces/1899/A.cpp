/*
*	author 	: nxtsourav7
*	problem : Game with Integers
*	created : 2023-11-17 20:40:53
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
	int n;
    cin >> n;

    if((n+1)%3 == 0 || (n-1)%3 == 0) {
        cout << "First";
    }
    else {
        cout << "Second";
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
