/*
*	author 	: nxtsourav7
*	problem : Morning Sandwich
*	created : Jul/27/2023 20:36:40
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int b,c,h;
    cin >> b >> c >>h;

    if(b <= c+h) {
        cout << 2*b-1 << "\n";
    }
    else {
        cout << 2*(c+h)+1 << "\n";
    }
}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}