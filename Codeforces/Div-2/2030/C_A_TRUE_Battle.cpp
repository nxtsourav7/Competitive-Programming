    /**
     *	author 	: nxtsourav7
    *	created : 2024-12-10 13:45:26
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

        if(s[0] == '1' || s[n - 1] == '1' || s.find("11") != string::npos) {
            cout << "YES";
        }
        else cout << "NO";
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