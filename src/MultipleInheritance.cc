// multiple inheritance
#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  CPolygon() { width=0; height=0; }
  CPolygon(int a,int b) { width=a; height=b; }
};

class COutput {
public:
  void output(int i) { cout << i << endl; }
};

class CRectangle: public CPolygon, public COutput {
public:
  CRectangle(){}
  CRectangle(int a,int b) : CPolygon(a,b){}
  int area() { return (width * height); }
};

class CTriangle: public CPolygon, public COutput {
public:
  CTriangle(){}
  CTriangle(int a,int b) : CPolygon(a,b){}
  int area() { return (width * height / 2); }
};

int main() {
  CRectangle rect(4,5);
  CTriangle trgl(4,5);
  rect.output(rect.area());
  trgl.output(trgl.area());
  return 0;
}
