/*
 * user_id : nxtsourav7
 * author : Sourav Mondal
 * created : Mar/21/2023 22:18:17
*/

// Problem : Grab the Candies

#include<bits/stdc++.h>
using namespace std;

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

void solve() {
	int n;
	cin >> n;
	
	int array[n];
	
	F0R(i , n) {
		cin >> array[i];
	}
	
	int even = 0;
	int odd = 0;
	
	F0R(i , n) {
		if(array[i]%2 == 0) {
			even += array[i];
		}
		else {
			odd += array[i];
		}
	}
	
	//condition !!
	if(even > odd) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main(void) {
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    //test case !!
    int tt = 1;
    cin >> tt;
    while(tt--)solve();

    return 0;
}