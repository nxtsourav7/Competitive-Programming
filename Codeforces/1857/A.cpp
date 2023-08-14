/*
*	author 	: nxtsourav7
*	problem : Array Coloring    
*	created : 2023-08-08 15:24:15
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long
void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    ll sum =0;
    for(auto &a : v) {
        cin >> a;
        sum+=a;
    }

    if(sum % 2 == 0) {
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