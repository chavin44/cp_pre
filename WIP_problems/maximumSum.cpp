/*
 tbh don't rly know why this is not working so might work a new one, i think i have the right implementation
 Large test case not working for some reason
-- Maximum Sum --
https://codeforces.com/contest/1946/problem/B
*/
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


//store largest lement
// insert new sum next to largest lement
//fidn new sum by implenetn
ll newSum(vector<ll> ls, ll n) {
    vector<ll> dp(n, 0);
    dp[0] = ls[0];
    ll ans = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(ls[i], ls[i] + dp[i - 1]);
        ans = max(ans, dp[i]);
    }
    return ans;
}

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll largestElem = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > largestElem) {
            largestElem = a[i];
        }
    }
    for (int i = 0; i < k; i++) {
        
        int asd = newSum(a,a.size());
        if (asd < 0) {
          a.insert(a.begin() + indexOf(a,largestElem), 0);
        } else {
          a.insert(a.begin() + indexOf(a,largestElem), asd);
        }
        if (asd > largestElem) {
            largestElem = asd;
        }
    }
    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
    // cout << ans << " ";
    // cout << endl;
    // cout << MOD << " ";
    // cout << endl;
    
    const unsigned int MODSS = 1000000007;
    ll anss = (ll)ans;
    //cout << anss  << " || "<<endl;
    ll out = (anss % MODSS + MODSS) % MODSS;
    // cout << out << endl;
    // cout << MOD << endl;
    cout << out << endl;
}
int main() {
    int TC; cin >> TC;
    while (TC--) {
        solve();
    }
}
