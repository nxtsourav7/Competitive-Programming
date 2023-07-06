/*
*	author 	: nxtsourav7
*	problem : Compare T-Shirt Sizes
*	created : Jul/06/2023 21:44:11
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
	string s1,s2;
	cin >> s1 >> s2;

	if(s1 == s2) {
		cout << "=" << endl;
		return;
	}

	if(s1[s1.size()-1] == s2[s2.size()-1]) {
		if(s1[s1.size()-1] == 'S') {
			s1>s2 ? cout <<"<" : cout << ">";
			cout << endl;
		}
		else {
			s1>s2 ? cout <<">" : cout << "<";
			cout << endl;
		}
	}
	else {
		if(s1[s1.size()-1] > s2[s2.size()-1]) {
			cout << "<" << endl;
		}
		else {
			cout << ">" << endl;
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