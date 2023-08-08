/*
*	author 	: nxtsourav7
*	problem : Trailing Zeros
*	created : 2023-08-08 12:44:19
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long
void solve() {
    int n;
    cin >> n;

    int i =1;
    int ans=0;
    while(n/pow(5,i) > 0) {
        ans += n/pow(5,i);
        i++;
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