/**
 *	author 	: nxtsourav7
 *	created : 2024-12-22 13:29:28
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
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for(auto &x : A) cin >> x;

    if(2 * N > M) {
        cout << "NO";
        return;
    }

    sort(rall(A));
    int sum = A[0] + N;
    for(int i = 0; i < N - 1; ++i) {
        sum += A[i];
    }
    
    cout << (sum <= M? "YES" : "NO");
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