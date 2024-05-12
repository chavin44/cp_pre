//https://codeforces.com/group/yVAVUcL9au/contest/523552/problem/H

#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
    
    int count[26] = {0};
    int count_b[26] = {0};
    
    for (char c : a) {
        count[c - 'a']++;
    }
    
    for (char c : b) {
        count_b[c - 'a']++;
    }
    
    int min_count = INT_MAX;
    for (int i = 0; i < 26; i++) {
        if (count_b[i] > 0) {
            min_count = min(min_count, count[i] / count_b[i]);
        }
    }
    
    cout << min_count << endl;
    
    return 0;
}
