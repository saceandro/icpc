#include <iostream>
using namespace std;

const int MAX_N=100;
int n, W, w[MAX_N], v[MAX_N], dp[MAX_N+1][MAX_N+1];

void solve() {
  for (int i=0; i<n; i++) {
    for (int j=0; j<=W; j++) {
      if (j<w[i]) dp[i+1][j] = dp[i][j];
      else dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
    }
  }
  cout << dp[n][W] << endl;
}

int main() {
  cin >> n >> W;
  for (int i=0; i<n; i++) cin >> w[i];
  for (int i=0; i<n; i++) cin >> v[i];
  solve();
  return 0;
}
