/**
 *  author : nxtsourav7
 *  created : 2024-07-17 20:57:20
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    auto nxtsourav7 = []()->void {
        int N, K;
        cin >> N >> K;
        string S, T;
        cin >> S >> T;

        int one_S = 0, one_T = 0, diff = 0;
        for(int i = 0; i < N; ++i) {
            if(S[i] == '1') one_S++;
            if(T[i] == '1') one_T++;
            if(S[i] != T[i]) diff++;
        }

        if(one_S != one_T) {
            cout << "NO";
            return;
        }

        diff /= 2;
        if(S == "01" || S == "10") {
            if(S == T) {
                if(K & 1) cout << "NO";
                else cout << "YES";
            }
            else {
                if(K & 1) cout << "YES";
                else cout << "NO";
            }
            return;  
        }

        if(diff <= K) {
            cout << "YES";
        }
        else cout << "NO";
    };

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}