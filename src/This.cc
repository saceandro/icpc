#include <iostream>
using namespace std;

class CDummy {
public:
  bool isitme(CDummy& param) { return (&param == this); }
  /*
  int isitme(CDummy& param) { return (&param == this); }
  */
};

int main() {
  CDummy a;
  CDummy* b = &a;
  if (b->isitme(a)) cout << "yes, &a is b" << endl;
  else cout << "no, &a is not b" << endl;
  return 0;
}
