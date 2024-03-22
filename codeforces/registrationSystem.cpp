#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    unordered_map<string,int> ls;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (ls.count(str) > 0) {
            int temp = ls[str] + 1;
            ls[str] = temp;
            cout << str << (ls[str]) << endl;
        } else {
            ls[str] = 0;
            cout << "OK" << endl;
        }
    }
    return 0;
}
