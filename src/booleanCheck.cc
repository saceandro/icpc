#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  if (0) printf("0\n"); // 0 = false
  if (1) printf("1\n"); // 1 = true
  printf("\n");
  if (true|true) printf("0\n");
  if (true|false) printf("1\n");
  if (false|true) printf("2\n");
  if (false|false) printf("3\n");
  printf("\n");
  if (0|0) printf("0\n");
  if (0|1) printf("1\n");
  if (1|0) printf("2\n");
  if (1|1) printf("3\n");
  printf("\n");
  if (0==true) printf("0\n");
  if (0==false) printf("1\n");
  if (1==true) printf("2\n");
  if (1==false) printf("3\n");
  return 0;
}
