#include <iostream>
using namespace std;

const int MAX_N=2000;
int n;
char s[MAX_N+1];

void solve() {
  int l=0, r=n-1;
  while (l<=r) {
    bool left = false;
    for (int i=0; l+i<r; i++) {
      if (s[l+i]<s[r-i]) {
	left = true;
	break;
      }
      else if (s[l+i]>s[r-i]) {
	left = false;
	break;
      }
    }
    if (left) {cout << s[l]; l++;}
    else {cout << s[r]; r--;}
  }
  cout << endl;
}

int main() {
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> s[i];
  }
  solve();
  return 0;
}
