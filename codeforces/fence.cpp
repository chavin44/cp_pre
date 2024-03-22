#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int ls[n];
    for (int i = 0; i < n; i++) {
        cin >> ls[i];
    }
 
    vector<int> prefixSum(n);
    prefixSum[0] = ls[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + ls[i];
    }
 
    int total = INT_MAX;
    int zz = 0;
    for (int i = 0; i <= n-k; i++) {
        int tempTotal = prefixSum[i+k-1] - (i > 0 ? prefixSum[i-1] : 0);
        if (tempTotal < total) {
            total = tempTotal;
            zz = i;
        }
    }
 
    cout << zz + 1 << endl;
    return 0;
}
