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
vector<string> splitString(string str, string delimiter) { vector<string> result; size_t pos = 0; std::string token; while ((pos = str.find(delimiter)) != std::string::npos) {token = str.substr(0, pos);   result.push_back(token);str.erase(0, pos + delimiter.length());  }result.push_back(str);  return result;}

void solve(int testcase) {
    //bruh, i js solved scewer scurry, i made a typo in my nested for loop :(
    int r,c;
    cin >> r >> c;
    vector<vector<char>> ls(r,vector<char>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> ls[i][j];
        }
    }
    vector<int> res;
    bool end = false;
    for (int i = 0; i < c; i++) {
        end = false;
        for (int j = 0;j<r;j++) {
            if (ls[j][i]=='#') {
                for (int bij = j+1; bij < r; bij++) {
                    res.push_back((bij*r) + i);
                }
                end = true;
                if (end) {
                    break;
                }
            }
            if (end) {
                break;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << "Testcase " << testcase <<" NORTH: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    res.clear();
    //wip - broken idk why
    for (int i = 0; i < r; i++) {
        end = false;
        for (int j = c-1;j>=0;j--) {
            cout << i << " " << j << endl;
            if (ls[i][j]=='#') {
                for (int bij = j-1; bij >= 0; bij--) {
                    res.push_back((i*r) + j);
                }
                end = true;
                if (end) {
                    break;
                }
            }
            if (end) {
                break;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << "Testcase " << testcase <<" EAST: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}
int main() {
    int TC;
    cin >> TC;
    for (int i = 1; i <= TC; i++) {
        solve(i);
    }
    return 0;
}
