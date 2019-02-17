#include <iostream>
using namespace std;

int main() {
  char a;
  char * b;
  char ** c;
  
  a = 'z';
  b = &a;
  c = &b;
  cout << a << " " << b << " " << c << endl;
  if (**c == a) cout << "ok" <<endl;
}
