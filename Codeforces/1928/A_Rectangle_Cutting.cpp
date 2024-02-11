/**
 *	author 	: nxtsourav7
 *	created : 2024-02-11 15:43:04
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
        int a,b;
        cin >> a >> b;

        if(a&1 and b&1) {
            cout << "NO";
        }
        else if(a&1) {
            if(b/2 == a) {
                cout << "NO";
            }
            else {
                cout << "YES";
            }
        }
        else if(b&1) {
            if(a/2 == b) {
                cout << "NO";
            }
            else {
                cout << "YES";
            }
        }
        else {
            cout << "YES";
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