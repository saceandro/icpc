// classes example
#include <iostream>
using namespace std;

class CRectangle {
  int x, y;
public:
  void set_values (int,int);
  int area () {return (x*y);}
};

void CRectangle::set_values (int a, int b) { x = a; y = b; }

int main () {
  CRectangle rect;
  int a,b;
  cin >> a >> b;
  rect.set_values (a,b);
  cout << "area: " << rect.area() << endl;
  return 0;
}
