/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 11:28:30
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
    int n; cin >> n;
    vector<int> A(n), B(n);
    for(auto &x : A) cin >> x;
    for(auto &x : B) cin >> x;

    int l = 0, r = n-1;
    for(int i = 0; i < n; ++i) {

            if(A[i] == B[l]) l++;
            else if(A[i] == B[r]) r--;
            else {
                cout << "Alice";
                return;
            }
        
    }

    l = 0, r = n-1;
    for(int i = n - 1; i >= 0; --i) {
        if(A[i] == B[l]) l++;
        else if(A[i] == B[r]) r--;
        else {
            cout << "Alice";
            return;
        }
    }

    cout << "Bob";
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