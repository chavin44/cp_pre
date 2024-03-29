#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

#define ll                  long long
#define ull                 unsigned long long
#define endl                '\n'
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()

#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define neg1                cout<<-1<<endl

#define PI                  3.141592653589793238
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define MOD                 1000000007
#define LLM                 1000000000000000007

#define contains(v, e)      (find(v.begin(), v.end(), e) != v.end())
#define indexOf(v, e)       (find(v.begin(), v.end(), e) != v.end() ? distance(v.begin(), find(v.begin(), v.end(), e)) : -1)

ll factorial(ll n)              { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r)              { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=MOD; while(b){ if (b&1) ans = (ans*a) % MOD; a = (a*a) % MOD; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false; return true; }

using namespace std;

bool fullClear(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if ((arr[i] != 0)) {
          return true;
        }
    }
    return false;
}

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> ls;
    int shortest = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
       shortest = min(arr[i],shortest);
    }
    int ans = 0;
    while (fullClear(arr)) {
        int tot = 0;
        ls.push_back(arr.size()-ans);
        ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i]-shortest >= 0) {
                tot += arr[i]-shortest;
                arr[i] = (arr[i]-shortest);
            }
            if (arr[i] == 0) {
                ++ans;
            }
        }
        shortest = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0)
                shortest = min(shortest,arr[i]);
        }
    }
    return ls;
}
void solve() {
    int n;
    cin >> n;
    vector<int> ls(n);
    for (int i = 0; i < n; i++)
        cin >> ls[i];
    vector<int> ss = cutTheSticks(ls);
    for (int i = 0; i < ss.size(); i++) {
        cout << ss[i] << endl;
    }
}
int main() {
    // int TC; cin >> TC;
    // while (TC--) {
    solve();
    // }
}
