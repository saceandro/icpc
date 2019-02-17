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

int main(int argc, char ** argv) {
  int * a = new int[argc-1];
  for (int i=1; i<argc; i++)
    *(a+i-1) = atoi(*(argv+i)); // a[i-1] = atoi(argv[i]);
  solve(a,argc);
  return 0;
}
