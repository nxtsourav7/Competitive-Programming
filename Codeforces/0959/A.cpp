/*
*	author 	: nxtsourav7
*	problem : Mahmoud and Ehab and the even-odd game
*	created : 2023-09-21 12:50:21
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int n;
    cin >> n;

    if(n%2 == 0) {
        cout << "Mahmoud\n";
    }
    else {
        cout << "Ehab\n";
    }
}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}