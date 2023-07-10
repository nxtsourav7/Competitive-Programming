/*
*	author 	: nxtsourav7
*	problem : Rudolf and the Another Competition
*	created : Jul/07/2023 21:54:39
*/

#include<bits/stdc++.h>


using namespace std;


/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()
#define mp make_pair


/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n,m,h;

	cin >> n >>m >>h;

	pair<int , long long> rudolf;

	int count = 1;
	for(int i=0 ; i<n ; i++) {

		vector<int> v(m);

		for(int j=0 ; j<m ; j++) {
			cin >> v[j];
		}

		sort(all(v));

		long long sum = 0;
		long long penalty = 0;
		int solved = 0;

		for(int j=0 ; j<m ; j++) {
			if(sum+v[j] > h) break;

			sum += v[j];
			penalty += sum;
			solved++;
		}
		pair<int , long long> a;

		// cout << solved <<" " << penalty <<"\n";

		a = {solved,penalty};

		// cout << a.first << " " << a.second <<"\n";
		if(i) {
			if(a.first == rudolf.first && a.second < rudolf.second) count++;

			if(a.first > rudolf.first) count++; 

			//gready trick
			// if(mp(-solved,penalty) < rudolf) count++;
		}
		else {
			rudolf = {solved,penalty};

			//gready trick
			// rudolf = {-solved,penalty};
		}	

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