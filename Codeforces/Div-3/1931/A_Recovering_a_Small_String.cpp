/**
 *	author 	: nxtsourav7
 *	created : 2024-02-13 20:38:14
**/


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()



void nxtsourav7(){
    int n;
    cin >> n;

    vector<char> ltr(27);
    for(int i=1; i<=26; ++i) {
        ltr[i] = 'a'+(i-1);
    }

    if((n-2)<=26) {
        cout << "aa" << ltr[n-2];
    }
    else {
        if(n-26 <= 26) {
            cout << 'a' << ltr[n-27] << 'z';
        }
        else {
            cout << ltr[n-52] << "zz";
        }
    }
}



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}