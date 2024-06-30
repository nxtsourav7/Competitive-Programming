/**
 *  author : nxtsourav7
 *  created : 2024-06-30 18:13:42
**/ 
//unsolved

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
        string S, T;
        cin >> S >> T;

        for(int c = 1; c < sz(S); c++){
            for(int w = c; w < sz(S); w++){
                string Z;
                for(int i = 0;i < sz(S); i+=w){
                    int len = min(w, sz(S)-i);
                    if(len>=c) Z+=S[i+c-1];
                }
                if(Z == T){
                    cout << "Yes";
                    return;
                }
            }
        }
        cout << "No";
    };

    bool Q = false;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}