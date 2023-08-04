/*
*	author 	: nxtsourav7
*	problem : Increasing Array
*	created : 2023-08-03 17:22:20
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n;
    cin >> n;
    ll mx = 0;
    ll ans = 0;

    for(int i=0 ; i<n ; i++) {
        ll x;
        cin >> x;

        mx = max(mx,x);

        ans += mx-x;
    }

    cout << ans << '\n';
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