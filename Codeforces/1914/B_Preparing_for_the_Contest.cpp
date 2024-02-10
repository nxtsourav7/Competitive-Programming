/**
 *	author 	: nxtsourav7
 *	created : 2023-12-19 20:42:30
**/


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define sz(x) x.size()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n,k;
        cin >> n >> k;
 
        for(int i=n-k; i>=1; --i) {
            cout << i << " ";
        }
        for(int i=n-k+1; i<=n; ++i) {
            cout << i << " ";
        }   
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