#include <cstdio>

const int MAX_NM=1000;
int n, m, M;

int dp[MAX_NM+1][MAX_NM+1];

void solve() {
  dp[0][0] = 1;
  for (int i=1; i<=m; i++)
    for (int j=0; j<=n; j++) {
      if (j-i >= 0)
	dp[i][j] = (dp[i][j-i] + dp[i-1][j]) % M;
      else
	dp[i][j] = dp[i-1][j];
    }
  printf("%d\n", dp[m][n]);
}

int main() {
  scanf("%d %d %d", &n, &m, &M);
  solve();
  return 0;
}
