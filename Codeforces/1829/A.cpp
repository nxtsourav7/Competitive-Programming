/*
*	author 	: nxtsourav7
*	problem : Love Story
*	created : 2023-09-21 13:22:03
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    string love = "codeforces";
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0 ; i<10 ; ++i) {
        if(s[i]!=love[i]) {
            ans++;
        }
    }
    cout << ans << "\n";
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