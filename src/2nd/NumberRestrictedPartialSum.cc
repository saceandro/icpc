#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N=100, MAX_K=100000;
int n;
int K;
int a[MAX_N];
int m[MAX_N];
bool dp[MAX_N+1][MAX_K+1];

void solve() {
  dp[0][0] = true;
  for (int i=0; i<n; i++) {
    for (int j=0; j<=K; j++) {
      for (int k=0; k<=m[i] && k*a[i]<=j; k++)
	dp[i+1][j] |= dp[i][j-k*a[i]];
    }
  }
  if (dp[n][K]) printf("Yes\n");
  else printf("No\n");
}

int main() {
  cin >> n >> K;
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> m[i];
  solve();
  return 0;
}
