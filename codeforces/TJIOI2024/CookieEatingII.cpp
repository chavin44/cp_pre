//https://codeforces.com/group/yVAVUcL9au/contest/523552/problem/B
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n,m,c;
    cin >> n >> m >> c;
    string str;
    while (c>0) {
      if (n>=c) {
        c=0;
        str = "Cookie Monster";
        break;
      } else {
        c-=n;
      }
      if (m>=c) {
        c=0;
        str = "Elmo";
        break;
      }
      else {
        c-=m;
      }
    }
    cout << str << endl;;
    return 0;
}
