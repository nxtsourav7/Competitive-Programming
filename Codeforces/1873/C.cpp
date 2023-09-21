/*
*	author 	: nxtsourav7
*	problem : Target Practise
*	created : 2023-09-21 21:09:12
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    char target[11][11];
    int final_score = 0;
    for(int i=1 ; i<11 ; ++i) {
        for(int j=1 ; j<11 ; ++j) {
            cin >> target [i][j];


            if(target[i][j] == 'X') {
                int min_i = min(i , (10-i+1));
                int min_j = min(j , (10-j+1));

                int score = min(min_i , min_j);

                final_score += score;
            }
        }
    }


    cout << final_score << "\n";
}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}