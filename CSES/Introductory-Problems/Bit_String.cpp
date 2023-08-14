/*
*	author 	: nxtsourav7
*	problem : Bit String
*	created : 2023-08-08 11:47:48
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long

#define mod 1000000007
void solve() {
    int n;
    cin >> n;

    ll ans = 1;
    for(int i=1 ; i<=n ; i++) {
        ans = (ans*2)%mod;
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