/**
 *	author 	: nxtsourav7
 *	created : 2023-12-28 21:08:18
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl "\n"
#define f first 
#define s second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


auto solve = []() {
	int n;
    string s;
    cin >> n >> s;
    int st = 0;
    int ed = -1;
    for(int i=0; i<n-2; ++i) {
        if((s[i]=='a'||s[i]=='e') && (s[i+1]=='b'||s[i+1]=='c'||s[i+1]=='d') && (s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d')) {
            ed = i+1;
            string temp = s.substr(st,ed-st+1);
            cout << temp << ".";
            st = i+2;
            i += 2;
        }
        else if((s[i]=='a'||s[i]=='e') && (s[i+1]=='b'||s[i+1]=='c'||s[i+1]=='d') && (s[i+2]=='a'||s[i+2]=='e')){
            ed = i;
            string temp = s.substr(st,ed-st+1);
            cout << temp << ".";
            st = i+1;
        }
    }

    cout << s.substr(ed+1,n-ed+1);
};


int32_t main() {
	fastIO;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}