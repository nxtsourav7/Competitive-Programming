/**
 *	author 	: nxtsourav7
 *	created : 2024-05-10 20:51:28
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    auto nxtsourav7 = []()->void {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // solve here
        int x = c < max(a, b) and c > min(a, b);
        int y = d < max(a, b) and d > min(a, b);
        if(x + y == 0 || x + y == 2 ) {
            cout << "NO";
        }
        else cout << "YES";
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