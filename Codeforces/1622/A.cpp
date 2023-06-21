/*
*	author 	: nxtsourav7
*	problem : Construct a Rectangle
*	created : 	2023-06-18 08:51:04
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

bool prime(int x) {
	for(int i=2 ; i*i <= x ; i++) {
		if(x%i==0) return false;
	}
	return true;
}

void solve() {
	int array[3];
	int max = 0;
	int sum = 0;
	for(int i=0 ; i<3 ; i++) {
		cin >> array[i];
		if(array[i] > max) max = array[i];
		sum += array[i];
	}
	if(sum == 2*max) {
		cout << "YES" << endl;
	}
	else {
		if((array[0]==array[1] && array[2]%2==0) || (array[1]==array[2] && array[0]%2==0) || (array[0] == array[2] && array[1]%2==0)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
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
		solve();
	}

	return 0;
}
