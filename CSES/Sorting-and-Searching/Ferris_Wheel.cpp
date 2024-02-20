/**
 *	author 	: nxtsourav7
 *	created : 2024-02-20 13:29:56
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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(auto& it : arr) {cin >> it;}

        ranges::sort(arr);
        int ans=0;
        for(int i=0; ; ++i) {
            int j=upper_bound(all(arr), (x-arr[i])) - arr.begin()-1;
            if(i<j){
                arr.erase(arr.begin()+j);
                ans++;
            }
            else {
                break;
            }
        }
        cout << ans+(n-2*ans);
    };


    bool Q = false;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}