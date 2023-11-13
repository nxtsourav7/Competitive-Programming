/*
*	author 	: nxtsourav7
*	problem : Casimir's String Solitaire
*	created : Nov/13/2023 11:23:05
*/

#include<bits/stdc++.h>
using namespace std;


void once_more() {
	string s;
    cin >> s;

	int x = count(s.begin(),s.end(),'B')*2;
    if(x == (int)s.size()) {
        cout << "YES";
    }
    else {
        cout << "NO";
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
		once_more();
        cout << "\n";
	}

	return 0;
}
