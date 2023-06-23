/*
*	author 	: nxtsourav7
*	problem : Team Olympiad
*	created : Jun/23/2023 09:26:15
*/

#include<bits/stdc++.h>
using namespace std;

/* DEFINE */
#define ll long long
#define ld long double
#define read(x) int x;cin >> x
#define all(x) (x).begin(),(x).end()

/* CONSTANT */
const ll MOD = 1e9+7;
const ll INF = 1e9;

void solve() {
	int n;
    cin >> n;
    vector<int> v(n);

    int a=0, b=0 , c=0;
    for(int i=0 ; i<n ; i++) {
        cin >> v[i];
        if(v[i]==1)a++;
        if(v[i]==2)b++;
        if(v[i]==3)c++;
    }
    //checking min
    int m = min({a,b,c});
    cout << m << endl;

    for(int i=0 ; i<m ; i++) {
        bool x=0,y=0,z=0;
        for(int j=0 ; j<n ; j++) {
            if(v[j]==1 && !x) {
                cout << j+1 <<" ";
                v[j]=0;
                x=1;
            }
            if(v[j]==2 && !y) {
                cout << j+1 << " ";
                v[j]=0;
                y=1;
            } 
            if(v[j]==3 && !z) {
                cout << j+1 << " ";
                v[j]=0;
                z=1;
            }
        }
        cout << endl;
    }

    


}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	// cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		solve();
	}

	return 0;
}