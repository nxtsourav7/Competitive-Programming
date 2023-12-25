/*
 * user_id : nxtsourav7
 * author : Sourav Mondal
 * created : Mar/21/2023 22:39:54
*/

// Problem : Plus or Minas

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
	int a , b , c;
	cin >> a >> b >> c;
	
	if(a+b == c) {
		cout << "+" << endl;
	}
	else {
		cout << "-" << endl;
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