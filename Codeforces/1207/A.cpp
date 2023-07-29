/*
*	author 	: nxtsourav7
*	problem : There Are Two Types Of Burgers
*	created : Jul/27/2023 12:47:22
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
// #define ll long long
// #define ld long double
// #define read(x) int x;cin >> x
// #define all(x) (x).begin(),(x).end()

/* CONSTANT */
// const ll MOD = 1e9+7;
// const ll INF = 1e9;

void solve() {
	int bun,beef,chicken;
    cin >> bun >> beef >> chicken;

    int pb , pc;
    cin >> pb >> pc;

    int b = bun/2;

    if(b == 0) {
        cout << "0\n";
        return;
    }

    if(pb>=pc) {
        int x = b-beef;
        if(x<=0) {
            cout << b*pb <<'\n';
        }
        else {
            x = min(x,chicken);
            cout << (beef*pb)+(x*pc) << '\n';
        }

    }
    else {
        int x = b-chicken;
        if(x<=0) {
            cout << b*pc <<'\n';
        }
        else {
            x = min(x,beef);
            cout << (chicken*pc)+(x*pb)<< '\n';
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
