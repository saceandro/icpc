#include <iostream>
using namespace std;

void solve(int * a, int n) {
  int ans=0;
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      for (int k=j+1; k<n; k++) {
	int len = a[i]+a[j]+a[k];
	int ma = max(a[i],max(a[j],a[k]));
	int rest = len - ma;
	if (ma < rest) ans = max(ans, len);
      }
    }
  }
  cout << ans << endl;
}

int main() {
  int n;
  cin >> n;
  int * a = new int[n];
  for (int i=0; i<n; i++) cin >> a[i];
  solve(a,n);
  return 0;
}
