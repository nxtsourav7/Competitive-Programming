/*
*	author 	: nxtsourav7
*	problem : Restore the Permutation by Merger
*	created : 2023-11-16 10:32:54
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
	int n;
    cin >> n;

    vector<int> v(2*n);

    for(auto &it : v) cin >> it;

    bool flag[n+1] = {false};
    for(int i=0 ; i<2*n ; ++i) {
        if(!flag[v[i]]) {
            cout << v[i] << " ";
            flag[v[i]] = true;
        }
    }
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		d0();
        cout << "\n";
	}

	return 0;
}
