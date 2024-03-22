#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin >> a >>b;
    for (int i = 0; i < b; i++) {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < a-1; i++) {
            if (i%2 == 0 && i%4 == 0) {
                for (int z = 0; z < b-1; z++) {
                    cout << ".";
                }
                cout << "#" << endl;
            } else if (i%2 == 0 && i%4 != 0) {
                cout << "#";
                for (int z = 0; z < b-1; z++) {
                    cout << ".";
                }
                cout << endl;
            } else {
                for (int z = 0; z < b; z++) {
                    cout << "#";
               }
            cout << endl;
        }
    }
}
