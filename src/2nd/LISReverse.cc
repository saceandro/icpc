#include <cstdio>
#include <iostream>
using namespace std;

const int MAX_N=1000, INF=100000000;
int n, a[MAX_N],dp[MAX_N];

void solve() {
  fill(dp, dp+n, INF);
  for (int i=0; i<n; i++) *lower_bound(dp, dp+n, a[i]) = a[i];
  printf("%d\n", lower_bound(dp, dp+n, INF) - dp);
}

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) scanf("%d", &a[i]);
  solve();
  return 0;
}
