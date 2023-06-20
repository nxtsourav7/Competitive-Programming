/*
*	author 	: nxtsourav7
*	problem : Two Elevators
*	created :  22.05.2023 21:07:53
*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
	int a , b , c;
	cin >> a >> b >> c;
	
	if((a-1) < (abs(b-c) + (c-1)) ){
		cout << "1" << endl;
	}
	else if ((a-1) > (abs(b-c) + (c-1))) {
		cout << "2" << endl;
	}
	else {
		cout << "3" << endl;
	}
	
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	////Test Case////
	int test_case = 1;
	cin >> test_case;
	for(int t=1 ; t<=test_case ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}