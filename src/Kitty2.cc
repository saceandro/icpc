#include <iostream>
using namespace std;

class Kitty2 {
public:
  string str;
  Kitty2(string);
};

Kitty2::Kitty2(string ch) {
  str = ch;
}

int main() {
  Kitty2 obj("Kitty is on your lap!\n");
  cout << obj.str;
  return 0;
}
