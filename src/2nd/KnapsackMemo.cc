#include <iostream>
using namespace std;

const int MAX_N=100;
int n, W, w[MAX_N], v[MAX_N], dp[MAX_N+1][MAX_N+1];

int rec(int i, int j) {
  if (dp[i][j]>=0) return dp[i][j];
  int res;
  if (i==n) res=0;
  else if (j<w[i]) res = rec(i+1, j);
  else res = max(rec(i+1, j), rec(i+1, j-w[i]) + v[i]);
  return dp[i][j] = res;
}

void solve() {
  memset(dp, -1, sizeof(dp));
  cout << rec(0, W) << endl;
}

int main() {
  cin >> n >> W;
  for (int i=0; i<n; i++) cin >> w[i];
  for (int i=0; i<n; i++) cin >> v[i];
  solve();
  return 0;
}
