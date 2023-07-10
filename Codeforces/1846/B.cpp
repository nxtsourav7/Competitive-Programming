/*
*	author 	: nxtsourav7
*	problem : Rudolph and Tic-Tac-Toe
*	created : Jul/07/2023 20:51:12
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	char ttc[3][3];

	for(int i=0 ; i<3 ; i++) {
		for(int j=0 ; j<3 ; j++) {
			cin >> ttc[i][j];
		}
	}

	if((ttc[0][0] == ttc[1][1]) && (ttc[2][2] == ttc[1][1]) && (ttc[1][1] != '.')) {
		cout << ttc[1][1] << endl;
		return;
	}

	if((ttc[2][0] == ttc[1][1]) && (ttc[0][2] == ttc[1][1]) && (ttc[1][1] != '.')) {
		cout << ttc[1][1] << endl;
		return;
	}


	for(int i=0 ; i<3 ; i++) {
		if((ttc[i][0] == ttc[i][1]) && (ttc[i][2] == ttc[i][1]) && (ttc[i][1] != '.')) {
			cout << ttc[i][1] << endl;
			return;
		}
	}

	for(int i=0 ; i<3 ; i++) {
		if((ttc[0][i] == ttc[1][i]) && (ttc[2][i] == ttc[1][i]) && (ttc[1][i] != '.')) {
			cout << ttc[1][i] << endl;
			return;
		}
	}

	cout << "DRAW" << endl;
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
	}

	return 0;
}