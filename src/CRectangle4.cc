// ex on constructors and destructors
#include <iostream>
using namespace std;

class CRectangle {
  int *width, *height;
public:
  CRectangle(int,int);
  ~CRectangle();
  int area() {return (*width * *height);}
};

CRectangle::CRectangle(int a, int b) {
  width = new int;
  height = new int;
  *width = a;
  *height = b;
}

CRectangle::~CRectangle() {
  delete width;
  delete height;
}

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  CRectangle rect(a,b), rectb(c,d);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
