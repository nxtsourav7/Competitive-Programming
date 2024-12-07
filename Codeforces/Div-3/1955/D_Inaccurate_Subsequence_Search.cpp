/**
 *	author 	: nxtsourav7
 *	created : 2024-12-06 10:28:03
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

const int N = 1E6 + 7;
// vector<int> A(N), B(N);
int A[N], B[N]; // Less overhead so faster

/*  N.B : hash table by vector / array must decleare     
*   in globally because for locally makes complexity
*   for each test case O(N) where N = 1E6+ . And if 
*   per test has 1E4 or more test case then makes it TLE !
*/

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    // int A[N], B[N]; // stack-overflow. total 16MB > 8MB(Stack Size)
    // vector<int> A(N), B(N); // TLE
    // map<int, int> A, B; // takes a lot of time(±500 ms)
    // static int A[N], B[N]; // [ok] like global use data segment and need cleanup
    for(auto &it : a) {cin >> it;}    
    for(auto &it : b) {
        cin >> it;
        B[it] += 1;
    }

    int cnt = 0;
    for(int i = 0; i < m; ++i) {
        if(B[a[i]]) {//find in B
            if(A[a[i]] < B[a[i]]) cnt += 1;
        }
        A[a[i]] += 1;
    }

    int ans = (cnt >= k);
    for(int r = m; r < n; ++r) {
        int l = r - m;
        A[a[l]] -= 1;
        if(B[a[l]]) {
            if(A[a[l]] < B[a[l]]) cnt -= 1;
        }

        if(B[a[r]]) {
            if(A[a[r]] < B[a[r]]) cnt += 1;
        }
        A[a[r]] += 1;

        ans += (cnt >= k);
    }
    cout << ans;

    // cleanup 
    for(auto it : b) {B[it] = 0;}
    for(int i = 0; i < m; ++i) {A[a[n - i - 1]] = 0;}
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