/*
 * user_id : nxtsourav7
 * author : Sourav Mondal
 * created : 09.03.2023 02:52
*/

// Problem : Medium Number

#include<bits/stdc++.h>
using namespace std;

using str = string;
using ll = long long;
using db = long double;

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

void solve(){
    vector <int> vec(3);

    cin >> vec[0] >> vec[1] >> vec[2];

    sort(vec.begin() , vec.end());

    cout << vec[1] << "\n";


}

int main(void){
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--)solve();

    return 0;
}
