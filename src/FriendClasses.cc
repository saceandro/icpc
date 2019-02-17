// friend class
#include <iostream>
using namespace std;

class CSquare {
private:
  int side;
public:
  CSquare() { side=0; }
  CSquare(int a) { side=a; }
  friend class CRectangle;
};

class CRectangle {
  int width, height;
public:
  int area() { return (width * height); }
  void convert(CSquare a) { width=a.side; height=a.side; }
};

int main() {
  CSquare sqr(4);
  CRectangle rect;
  rect.convert(sqr);
  cout << rect.area() << endl;
  return 0;
}
  
