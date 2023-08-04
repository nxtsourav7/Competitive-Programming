/*
*	author 	: nxtsourav7
*	problem : Permutations
*	created : 2023-08-03 17:37:17
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >>n;

    if(n==1) {
        cout << 1 << "\n";
        return;
    }
    if(n<=3) {
        cout << "NO SOLUTION\n";
        return;
    }
    
    for(int i=2 ; i<=n ; i+=2) {
        cout << i << " ";
    }
    for(int i=1 ; i<=n ; i+=2) {
        cout << i << " ";
    }
    
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