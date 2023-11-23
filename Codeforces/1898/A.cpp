/*
*	author 	: nxtsourav7
*	problem : Milica and String
*	created : 2023-11-23 17:23:48
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
   int n,k;
   string s;
   cin >> n >> k >> s;

   int count_b = count(s.begin(),s.end(),'B');

   int result = count_b-k;

   if(!result) {
        cout << "0";
   }
   else {
        cout << "1\n";
        if(result > 0) {
            int c = 0;
            int i ;
            for(i=n-1 ; i>=0 ; --i) {
                if(c==k) break;
                if(s[i]=='B') c++; 
            }
            cout << i+1 << " A";
        }
        else {
             int c = 0;
            int i ;
            for(i=0 ; i<n ; ++i) {
                if(s[i]=='A') c++; 
                if(c==abs(result)) break;
            }
            cout << i+1 << " B";
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
