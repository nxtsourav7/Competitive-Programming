/*
*	author 	: nxtsourav7
*	problem : Rudolph and Cut the Rope
*	created : Jul/07/2023 21:29:54
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
	int n;
	cin >>n;
	vector<int> v1(n); 
	vector<int> v2(n);

	for(int i=0 ; i<n ; i++) {
		cin >> v1[i] >> v2[i];
	}
	

	int count = 0;
	for(int i=0 ; i<n ; i++) {
		if(v1[i] > v2[i]) count++;
	}

	cout << count << endl;
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