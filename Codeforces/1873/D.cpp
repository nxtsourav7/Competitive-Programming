/*
*	author 	: nxtsourav7
*	problem : 1D Eraser
*	created : 2023-09-21 21:32:34
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for(int i=0 ; i<n ; ++i) {
        if(s[i] == 'B') {
            count++;
            i += (k-1);
        }
    }

    cout << count << "\n";
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