/**
 *	author 	: nxtsourav7
 *	created : 2024-02-07 20:38:37
**/

#include<bits/stdc++.h>

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()

using namespace std;


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int x,y;
        cin >> x >> y;

        cout << y/(x-1);
    };


    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}