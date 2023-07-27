#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while(test--) {
        int n,k;
        cin >> n >>k;

        vector<int> v(n);

        for(int i=0 ; i<n ; i++) {
            cin >> v[i];
        }

        vector<int> ans;
        int count = 1;
        sort(v.begin() , v.end());
        for(int i=0 ; i<n-1 ; i++) {
            if(v[i+1] - v[i] <= k) {
                count++;
            }
            else {
                ans.push_back(count);
                count  =1;
            }
        }
        ans.push_back(count);
        sort(ans.rbegin(),ans.rend());

        // for(auto a : ans) cout << a << " ";

        cout <<n-ans[0] << endl;
    }

    return 0;
}