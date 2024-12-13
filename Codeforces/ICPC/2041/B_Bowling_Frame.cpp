/**
 *	author 	: nxtsourav7
 *	created : 2024-12-13 00:17:03
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve() {
    int w, b;
    cin >> w >> b;
    int total = w + b;

    /*--------------Brute Force----------------*/
    // int tmp = sqrtl(total * 2);

    // int i;
    // for(i = max(0LL, tmp - 7);; ++i) {
    //     if(i * (i + 1) > (total * 2)) break;
    // }

    // cout << i - 1; 
    /*-----------------------------------------*/

    /*--------------Binary Search--------------*/
    int l = 0, r = total;
    while(l <= r) {
        int mid = (l + r) / 2;
        int sum = (mid * (mid + 1)) * 0.5;
        if(sum == total) {
            cout << mid;
            return;
        }

        if(sum > total) r = mid - 1;
        else l = mid + 1;
    }
    cout << r;
    /*-----------------------------------------*/
}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}