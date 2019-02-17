// overloading class constructors
#include <iostream>
using namespace std;

class CRectangle {
  int width, height;
public:
  CRectangle() { width=5; height=5; }
  CRectangle(int a,int b) { width=a; height=b; }
  int area(void) { return (width*height); }
};

int main() {
  int a,b,c,d;
  cin >> a >> b;
  CRectangle rect(a,b);
  CRectangle rectb;
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
