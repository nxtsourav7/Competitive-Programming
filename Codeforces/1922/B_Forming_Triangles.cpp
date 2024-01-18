/**
 *	author 	: nxtsourav7
 *	created : 2024-01-18 22:37:45
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl '\n'
#define ff first 
#define ss second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


#define read(n) int n;cin >> n;
#define inVec(x,n) vi x(n);each(x) cin >> it;

int factorial3(int num) {
    return (num * (num - 1) * (num - 2)) / 6;
}

int factorial2(int num) {
    return (num * (num - 1)) / 2;
}

auto solve = []() {
	int num;
    cin >> num;

    vector<int> array(num + 1, 0);

    for (int i = 0; i < num; i++) {
        int x;
        cin >> x;
        array[x]++;
    }

    int result = 0;
    int previous = 0;

    for (int i = 0; i <= num; i++) {
        if (array[i] >= 3) {
            result += factorial3(array[i]);
        }
        if (array[i] >= 2) {
            result += factorial2(array[i]) * previous;
        }
        previous += array[i];
    }

    cout << result;
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