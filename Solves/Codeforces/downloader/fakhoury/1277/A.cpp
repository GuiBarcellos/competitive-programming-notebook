#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
 typedef long long ll;
typedef pair<int, int> pii;
 const int INF = 0x3f3f3f3f;
const int MAXN = 1e5 + 5;
 mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 int main() {
 int t; scanf("%d", &t);
 while(t--) {
  ll n; scanf("%lld", &n);
   int qtt = 0;
  for (int d = 1; d <= 9; d++) {
   ll num = d;
    while(num <= n) {
    qtt++;
    num = num * 10 + d;
   }
  }
   printf("%d\n", qtt);
 }
    return 0;
}