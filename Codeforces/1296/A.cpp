/*
 * author : nxtsourav7
 * problem : Array with Odd Sum
 * created : May/07/2023 16:48:34
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int array[n];
    long long sum = 0;
    int odd = 0;
    for(int i=0 ; i<n ; i++) {
        cin >> array[i];
        sum += array[i];
        if(array[i]%2 != 0) {
            odd++;
        }
    }
    if(sum%2 != 0) cout << "YES";
    else {
        if(odd == n || odd == 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
    }    
    
    cout << "\n";
    return;

}
int main(void) {
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    
	return 0;
} 