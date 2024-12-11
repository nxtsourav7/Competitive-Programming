    /**
     *	author 	: nxtsourav7
    *	created : 2024-12-11 20:36:36
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
        int n, ve, va;
        cin >> n >> ve >> va;   
        vector<int> a(n);
        for(auto &it : a) {cin >> it;}

        int total = accumulate(all(a), 0LL);
        int mx = *max_element(all(a));

        if(ve + mx > total - mx + va) cout << "Ved";
        else if(ve + mx < total - mx + va) cout << "Varun";
        else cout << "Equal";
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