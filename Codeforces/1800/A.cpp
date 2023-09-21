/*
*	author 	: nxtsourav7
*	problem : Is It a Cat ?
*	created : 2023-09-21 10:59:07
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(unique(s.begin(),s.end()),s.end());

    if(s == "meow") {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    cout << "\n";
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