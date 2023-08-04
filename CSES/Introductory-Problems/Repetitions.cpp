/*
*	author 	: nxtsourav7
*	problem : Repetitions
*	created : 2023-08-03 17:03:51
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;

    int m =1 ;
    int count  = 1;
    for(int i=0 ; i<s.length()-1 ; i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
        else {
            count = 1;
        }
        m=max(m,count);

    }
    cout << m << '\n';
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