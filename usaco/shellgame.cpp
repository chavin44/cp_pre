// ONE TEST CASE WRONG I DONT KNOW WHY LOL 😭

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

#define ll                  long long
#define ull                 unsigned long long
#define endl                '\n'
#define ff                  first
#define ss                  second
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
    int N; cin>>N;
    //int ga,gb,gc;
    int ga = 0;
    int gb = 0;
    int gc = 0;
    int ls[] = {1,2,3};
    for (int i = 0; i < N; i++) {
        int a,b,g;
        cin >> a >> b >>g;
        swap(ls[a-1], ls[b-1]);
        if (1==ls[g-1]) {
            ga++;
        } else if (2==ls[g-1]) {
            gb++;
        } else if (3==ls[g-1]) {
            gc++;
        }
    }
    if (ga > gb && ga > gc) {
        cout << ga << '\n';
    } else if (gb > ga && gb > gc) {
        cout << gb << '\n';
    } else if (gc > ga && gc > gb) {
        cout << gc << '\n';
    }
   //cout << ga << " " << gb << " " << gc << endl;
    return 0;
}
