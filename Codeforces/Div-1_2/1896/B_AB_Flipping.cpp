/**
 *	author 	: nxtsourav7
 *	created : 2024-12-15 01:50:05
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    /*-----just find first A and last B by brute force---*/ 
    // int Ai = n - 1, Bi = 0;
    // bool flag = false;
    // for(int i = 0; i < n; ++i) {
    //     if(!flag and s[i] == 'A') {
    //         Ai = i;
    //         flag = true;
    //     }
        
    //     if(s[i] == 'B') Bi = i;
    // }
    // cout << max(0LL, Bi - Ai);
    /*-------------------------------------------------*/


    /*----------use two pointers (@ : tourist)------------*/
    int l = 0, r = n - 1;
    while(l <= r and s[l] == 'B') l += 1;
    while(l <= r and s[r] == 'A') r -= 1; 
    
    cout << max(0LL, r - l);
    /*---------------------------------------------------*/
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