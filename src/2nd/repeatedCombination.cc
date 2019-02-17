#include <cstdio>

const int M=10000, MAX_NM=1000;
int n, m, a[MAX_NM];

int dp[MAX_NM+1][MAX_NM+1];

void solve() {
  for (int i=0; i<=n; i++)
    dp[i][0]=1;
  for (int i=1; i<=n; i++)
    for (int j=1; j<=m; j++)
      if (a[i-1]<j)
	dp[i][j] = (dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1-a[i-1]]) % M;
      else
	dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % M;
  printf("%d\n", dp[n][m]);
}

int main() {
  scanf("%d %d\n", &n, &m);
  for (int i=0; i<n; i++) scanf("%d", &a[i]);
  solve();
  return 0;
}
