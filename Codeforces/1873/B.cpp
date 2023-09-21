/*
*	author 	: nxtsourav7
*	problem : Good Kid
*	created : 2023-09-21 20:49:08
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &a : v) {
        cin >> a;
    }

    sort(v.begin(),v.end());
    int zero = 0;
    for(auto &a : v) {
        if(a == 0) {
            zero++;
        }
    }

    if(zero > 1) {
        cout << 0 << "\n";
    }
    else {
        long long mal = 1;
        v[0] = v[0]+1;
        for(int i=0 ; i<n ; ++i) {
            mal *= v[i];

        }
        cout << mal << "\n";
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