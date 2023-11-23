/*
*	author 	: nxtsourav7
*	problem : Queue Sort
*	created : 2023-11-18 01:53:45
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it : v) cin >> it;

    int dis = distance(v.begin(),min_element(v.begin(),v.end()));

    if(is_sorted(v.begin()+dis , v.end())) {
        cout << dis;
    }
    else {
        cout << -1;
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
