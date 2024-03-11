/**
 *	author 	: nxtsourav7
 *	created : 2024-03-07 18:54:01
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n, m, k;
        cin >> n >> m >> k;

        if(k==1) {
            cout << 1;
        }
        else if(k==2) {
            if(m>n) {
                cout << n+(m/n)-1;
            }
            else {
                cout << m;
            }
        }
        else if(k==3) {
            if(m>n) {
                cout << (m-n) - (m/n-1);
            }
            else {
                cout << 0;
            }
        }
        else {
            cout << 0;
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