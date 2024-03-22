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
 
int main() {
    int TC; cin >>TC;
    char ls[] = {'A', 'B', 'C','D', 'E', 'F','G', 'H', 'I',
    'J', 'K', 'L', 'M', 'N', 'O','P' ,'Q' ,'R' ,'S' ,'T', 'U', 'V','W','X', 'Y', 'Z'};
    while (TC--) {
        double n;
        cin >> n;
        if (n==1.0) {
            cout << "NO" << endl;
        } else if (n>1 && (int)n%2==0) {
            string str;
            cout << "YES" << endl;
            int z = (int)(ceil(n/2));
            for (int i = 0; i < z; i++) {
                cout << ls[i] << ls[i];
            }
            cout << endl;
        } else if (n>1 && (int)n%2 !=0) {
            cout << "YES" << endl;
            int z = (int)(ceil(n/2));
            char add = ls[z-2];
            for (int i = 0; i < z-1; i++) {
                cout << ls[i] << ls[i];
            }
            cout << add;
            cout << endl;
        }
 
    }
    return 0;
}
