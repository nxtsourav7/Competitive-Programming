/*
*	author 	: nxtsourav7
*	problem : Gifts Fixing 
*	created : 2023-08-20 06:55:52   
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
    cin >> n;
    
    vector<int> candy(n);
    vector<int> orange(n);

    int minc = INF;
    int mino = INF;

    for(auto &a : candy) {
        cin >> a;
        if(a<minc) minc = a;
    }
    for(auto &a : orange) {
        cin >> a;
        if(a<mino) mino = a;
    }
    
    ll sum = 0;

    for(int i=0 ; i<n ; i++) {
        sum += max((candy[i]-minc),(orange[i]-mino));
    }

    cout << sum << '\n';
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
