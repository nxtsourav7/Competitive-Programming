/*
*	author 	: nxtsourav7
*	problem : Favourite Sequence
*	created : 2023-09-21 13:01:06
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &a : v) {
        cin >> a;
    }
    vector<int> ans(n);
    for(int i=0 ; i<n ; ++i) {
        if(i%2 == 0) {
            ans[i] = v[i/2];
        }
        else {
            ans[i] = v[n-(i/2)-1];
        }
    }

    for(auto &a : ans) {
        cout << a << " ";
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