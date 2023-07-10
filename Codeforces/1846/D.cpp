/*
*	author 	: nxtsourav7
*	problem : Rudolph and Christmas Tree
*	created : Jul/10/2023 09:28:32
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
	ld d,h;
	cin >> n >> d >> h;


	vector<int> v(n);
	for(int i=0 ; i<n ; i++) cin >> v[i];


	sort(all(v));


	long double area = (0.5 * d * h);
	for(int i=0 ; i<n-1 ; i++) {
		if(v[i] + h <= v[i+1]) {
			area += (0.5 * d * h);
		}
		else {
			long double h2 = (v[i+1] - v[i]);
			long double d2 = d * (v[i]+h-v[i+1]) / h;
			//area of Trapezoid
			area += (0.5 * (d2+d) * h2);
		}
	}


	cout << area << '\n';
}
int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cout.precision(10); 
    cout.setf(ios::fixed);


	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}