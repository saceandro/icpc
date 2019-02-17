#include <iostream>
using namespace std;

const int MAX_N=100;
int n, W, w[MAX_N], v[MAX_N];

int rec(int i, int j) {
  int res;
  if (i==n) res=0;
  else if (j<w[i]) res = rec(i+1, j);
  else res = max(rec(i+1,j), rec(i+1, j-w[i])+v[i]);
  return res;
}

void solve() {
  cout << rec(0,W) << endl;
}

int main() {
  cin >> n >> W;
  for (int i=0; i<n; i++) cin >> w[i];
  for (int i=0; i<n; i++) cin >> v[i];
  solve();
  return 0;
}
