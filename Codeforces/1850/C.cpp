#include<bits/stdc++.h>
using namespace std;

int main () {
    int test;
    cin >> test;

    while(test--) {
        char board[8][8];

        for(int i=0 ; i<8 ; i++) {
            for(int j=0 ; j<8 ; j++) {
                cin >> board[i][j];

                if(board[i][j] != '.') {
                    cout<< board[i][j];
                }            
            }
        }

        cout << '\n';
    }

    return 0;
}