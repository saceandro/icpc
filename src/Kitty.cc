#include <iostream>
using namespace std;

class Kitty {
public:
  string str;
  void print() {
    cout << str;
  }
} obj ;

int main() {
  obj.str = "Kitty on your lap\n";
  obj.print();
  return 0;
}
