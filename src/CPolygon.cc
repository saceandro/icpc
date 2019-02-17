// derived classes
#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  CPolygon(int a, int b) { width=a; height=b; }
};

class CRectangle: public CPolygon {
public:
  CRectangle(int a, int b) : CPolygon(a,b){}
  int area() { return (width * height); }
};

class CTriangle: public CPolygon {
public:
  CTriangle(int a, int b) : CPolygon(a,b){}
  int area() { return (width * height / 2); }
};

int main() {
  CRectangle rect(4,5);
  CTriangle trgl(4,5);
  cout << rect.area() << endl;
  cout << trgl.area() << endl;
  return 0;
}
  
