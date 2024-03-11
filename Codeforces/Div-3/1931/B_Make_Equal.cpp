/**
 *	author 	: nxtsourav7
 *	created : 2024-02-13 20:50:06
**/


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()



auto nxtsourav7 = []()->void {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(auto& it : v) {
        cin >> it;
        sum += it;
    }

    int mid = sum/n, giv = 0;
    for(int i=0; i<n; ++i) {
        if(v[i] >= mid) giv += mid-v[i];
        else {
            int nd = mid-v[i];
            giv += nd;
            if(giv > 0) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
};



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}