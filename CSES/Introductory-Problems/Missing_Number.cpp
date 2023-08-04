/*
*	author 	: nxtsourav7
*	problem : Missing Number
*	created : 2023-08-03 16:45:58
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    for(int i=1 ; i<n ; i++) {
        int a;
        cin >> a;
        sum += a;
    }

    cout << ((n*(n+1))/2) - sum << '\n';
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