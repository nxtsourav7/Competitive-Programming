    /**
     *	author 	: nxtsourav7
    *	created : 2024-12-10 16:19:50
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
        int n, b, c;
        cin >> n >> b >> c;

        if(n <= c) {
            cout << n;
            return;
        }

        if(b == 0) {
            if(n - c <= 2) cout << n - 1;
            else cout << -1;
        }
        else cout << n - (1 + (n - c - 1) / b);
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