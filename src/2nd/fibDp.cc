#include <iostream>
using namespace std;

const int MAX_N=1000000;
int memo[MAX_N+1];

int fib(int n) {
  if (n<=1) return n;
  if (memo[n]!=0) return memo[n];
  return memo[n] = fib(n-1)+fib(n-2);
}

int main() {
  int n;
  cin >> n;
  cout << fib(n) << endl;
}
