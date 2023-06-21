#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
    cin >> n;

    int move =0;
    while(n%2==0 || n%3==0 || n%5==0) {
        if(n%2==0) {
            n/=2;
        }
        else if(n%3==0) {
            n=(2*n)/3;
        }
        else if(n%5==0) {
            n=(4*n)/5;
        }
        move++;
    }

    if(n==1) {
        cout << move << endl;
    }
    else {
        cout << "-1" << endl;
    }
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
