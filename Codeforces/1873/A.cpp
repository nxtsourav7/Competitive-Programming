/*
*	author 	: nxtsourav7
*	problem : Short Sort    
*	created : 2023-09-21 20:37:05   
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;


    string test = "abc";
    int count = 0;
    for(int i=0 ; i<3 ; ++i) {
        if(test[i] != s[i]) {
            count++;
        }
    }

//output
    if(count < 3) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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