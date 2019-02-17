#include <iostream>
using namespace std;

const int coin[6] = {1,5,10,50,100,500};
int howmany[6], bill, ans;

void solve() {
  for (int i=5; i>=0; i--) {
    int use = min(bill/coin[i], howmany[i]);
    bill -= coin[i]*use;
    ans += use;
  }
  cout << ans << endl;
}

int main() {
  for (int i=0; i<6; i++) cin >> howmany[i];
  cin >> bill;
  solve();
  return 0;
}
