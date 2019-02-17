#include <iostream>
using namespace std;

const int MAX_N=10000;
int N, R, X[MAX_N];

void solve() {
  int piv=0, c=0;
  sort(X, X+N);
  while (piv<N) {
    int left = X[piv++];
    while (piv<N && X[piv]<=left+R) piv++;
    int right = X[piv-1];
    while (piv<N && X[piv]<=right+R) piv++;
    c++;
  }
  cout << c << endl;
}

int main() {
  cin >> N >> R;
  for (int i=0; i<N; i++) cin >> X[i];
  solve();
  return 0;
}
