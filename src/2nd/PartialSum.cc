#include <iostream>
using namespace std;

const int MAX_N = 20;
int a[MAX_N], n, k;

bool dfs(int i, int sum) {
  if (i==n) return sum==k;
  if (dfs(i+1, sum)) return true;
  if (dfs(i+1, sum+a[i])) return true;
  return false;
}

void solve() {
  if (dfs(0,0)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main() {
  cin >> n;
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> k;
  solve();
}
