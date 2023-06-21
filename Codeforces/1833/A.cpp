/*
*	author 	: nxtsourav7
*	problem : Musical Puzzle
*	created :  May/19/2023 20:35:48
*/
#include<bits/stdc++.h>
using namespace std;
////define///////
#define ll long long
#define ld long double
#define all(x) (x).begin(),(x).end()
#define FOR(a,b) for(int i=(a) ; i<(b) ; ++i)
////constant/////
const ll MOD = 1e9+7;
const ll INF = 1e9;
////input^^output////
inline void debugMode() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	set<string> st;

	for(int i=0 ; i<n-1 ; i++) {
		string temp = s.substr(i,2);
		// cout << temp <<endl;
		st.insert(temp);
	}

	cout << st.size() << endl;
	return;
}
int main(void) {
	// debugMode();
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
 
