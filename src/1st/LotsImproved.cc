#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

class LotsImproved {
private:
  int m, n, *k;
public:
  LotsImproved(int N, int M, int * K) { n=N; m=M; k=K; }

  bool binarySearch(int x) {
    int l=0, r=n;
    while (r-l>=1) {
      int i=(l+r)/2;
      if (k[i]==x) return true;
      else if (k[i]<x) l=i+1;
      else r = i;
    }
    return false;
  }
  
  void solve() {
    sort(k,k+n);

    bool f=false;
    
    for (int a=0; a<n; a++) {
      for (int b=a; b<n; b++) {
	for (int c=b; c<n; c++) {
	  int rest = m-k[a]-k[b]-k[c];
	  if (binarySearch(rest) && k[c]<=rest){
	    printf("%d %d %d %d\n",k[a],k[b],k[c],rest);
	    f=true;
	    //	    goto Label;
	  }
	}
      }
    }
    //  Label:
    f? puts("Yes"):puts("No");
  }
};

int main() {
  int n, m;
  
  scanf("%d %d", &n, &m);
  int * k = new int[n];
  for (int i=0; i<n; i++) scanf("%d", &k[i]);
  
  LotsImproved lot(n,m,k);
  lot.solve();
  return 0;
}
