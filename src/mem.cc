#include <cstdio>

int dp[10][10];

int main() {
  for (int i=0; i<10; i++)
    for (int j=0; j<10; j++)
      printf("%d", dp[i][j]);
  printf("\n");
  return 0;
}
