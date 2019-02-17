#include <iostream>
using namespace std;

int const MAX_N=100, MAX_W=10000;
int n, W, w[MAX_N], v[MAX_N], dp[MAX_W+1];

void solve() {
  for (int i=0; i<n; i++) {
    for (int j=w[i]; j<=W; j++)
      dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
  }
  cout << dp[W] << endl;
}

int main() {
  cin >> n >> W;
  for (int i=0; i<n; i++) cin >> w[i];
  for (int i=0; i<n; i++) cin >> v[i];
  solve();
}
