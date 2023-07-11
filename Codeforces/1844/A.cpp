#include<bits/stdc++.h>


using namespace std;


int main() {
    int ttt;
    cin >> ttt;

    while(ttt--) {
        int a,b;

        cin >> a >> b;

        if(a!=1) {
            cout << "1\n";
        }
        else if(a==1 && b==2){
            cout << "3\n";
        }
        else {
            cout << "2\n";
        }
    }


    return 0;
}