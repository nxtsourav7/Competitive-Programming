/**
 *	author 	: nxtsourav7
 *	created : 2024-02-27 20:56:51
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
        int n;
        cin >> n;
        vector<int> arr(n);
        ll sum = 0;
        for(auto& it : arr) {
            cin >> it;
            sum += it;
        }

        if(sum%3 == 1) {
            for(int i=0; i<n; ++i) {
                if(arr[i]%3 == 1) {
                    cout << 1;
                    return;
                }
            }
            cout << 2;
        }
        else if(sum%3 == 0) {
            cout << 0;
        }
        else {
            cout << 1;
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