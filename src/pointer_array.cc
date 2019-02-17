#include <iostream>
using namespace std;

int main() {
  int numbers[5];
  int * p;
  p = numbers; *p = 0;
  for (int i=1; i<5; i++) *(p+i) = i;
  /*
  for (int i=1; i<5; i++) {
    p = &numbers[i]; *p = i;
  }
  */
  /*
  for (int i=2; i<6; i++) {
    p++; *p = i;
  }
  */
  for (int n=0; n<5; n++)
    cout << *(numbers+n) /*numbers[n]*/ << ", ";
  cout << endl;
  return 0;
}
