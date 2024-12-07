    /**
     *	author 	: nxtsourav7
    *	created : 2024-12-05 21:00:59
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
        int n;      cin >> n;
        vector<int> a(n);
        for(auto &it : a) {cin >> it;}

        int odd = 0, even = 0;
        for(int i = 0; i < n; ++i) {
            if(i & 1) odd += a[i];
            else even += a[i];
        } 
        int cur = (n + 1) / 2;
        if(even % cur == 0) 
            even = even / cur;
        else {
            cout << "NO";
            return;
        }
        if(odd % (n -cur) == 0) 
            odd = odd / (n - cur);
        else {
            cout << "NO";
            return;
        }

        cout << (even == odd ? "YES" : "NO");
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