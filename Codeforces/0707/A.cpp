/*
*	author 	: nxtsourav7
*	problem : Brain's Photos
*	created : 2023-08-14 09:39:32
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int n,m;
    cin >> n >> m;

    for(int i=0 ; i<n ; ++i) {
        for(int j=0 ; j<m ; ++j) {
            char x;
            cin >> x;

            if(x != 'B' && x!= 'W' && x != 'G') {
                cout << "#Color\n";
                return;
            }
        }
    }

    cout << "#Black&White\n";
}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    // cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}