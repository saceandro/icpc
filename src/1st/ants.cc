#include <iostream>
#include <stdio.h>
using namespace std;

class ants {
private:
  int L, n;
  int * x;
public:  
  ants(int length, int number, int * displacement) {
    L = length; n = number; x = displacement;
  }
  
  void solve() {
    int minT = 0;
    for (int i=0; i<n; i++) minT = max(minT, min(x[i], L-x[i]));
    
    int maxT = 0;
    for (int i=0; i<n; i++) maxT = max(maxT, max(x[i], L-x[i]));
    
    printf("%d %d\n", minT, maxT);
  }
};

int main(int argc, char ** argv) {
  int L = atoi(argv[1]);
  int n = argc-2;
  int * x = new int[n];
  for (int i=0; i<n; i++) x[i] = atoi(argv[i+2]);
  ants ant(L,n,x);
  ant.solve();
  return 0;
}
