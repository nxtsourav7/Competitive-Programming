#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;
    vector<int> team(n);
    for(int i=0 ; i<n ; i++) {
        cin >> team[i];
    }

    vector<int> temp(team);
    sort(temp.rbegin() , temp.rend());

    // for(auto x : temp) cout << x <<" ";

    for(int i=0 ; i<n ; i++) {
        if(team[i] == temp[0]) {
            cout << team[i] - temp[1] << " ";
        }
        else {
            cout << team[i] - temp[0] << " ";
        }
    }
    cout << endl;
    return;
}
int main(void) {
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "test #" << t << ":";
		solve();
	}
	return 0;
}
