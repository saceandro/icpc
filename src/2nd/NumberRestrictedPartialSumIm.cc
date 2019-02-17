#include <cstdio>
#include <iostream>

const int MAX_N=100, MAX_K=100000;
int n, K, a[MAX_N], m[MAX_N], dp[MAX_K+1];

void solve() {
  memset(dp, -1, sizeof(dp));
  dp[0] = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<=K; j++) {
      if (dp[j]>=0) dp[j] = m[i];
      else if (j<a[i] || dp[j-a[i]]<=0) dp[j]=-1;
      else dp[j] = dp[j-a[i]]-1;
    }
  }
  if (dp[K]>=0) printf("Yes\n");
  else printf("No\n");
}

int main() {
  scanf("%d %d", &n, &K);
  for (int i=0; i<n; i++) scanf("%d", &a[i]);
  for (int i=0; i<n; i++) scanf("%d", &m[i]);
  solve();
  return 0;
}
