#include <iostream>
using namespace std;

const int MAX_N=100000;
int N, s[MAX_N], t[MAX_N];
pair<int,int> itv[MAX_N];

void solve() {
  for (int i=0; i<N; i++) {
    itv[i].first = t[i];
    itv[i].second = s[i];
  }
  sort(itv, itv+N);
  
  int ans=0, time=0;
  for (int i=0; i<N; i++)
    if (time<itv[i].second) { ans++; time = itv[i].first; }
  
  cout << ans << endl;
}

int main() {
  cin >> N;
  for (int i=0; i<N; i++) cin >> s[i];
  for (int i=0; i<N; i++) cin >> t[i];
  solve();
  return 0;
}
