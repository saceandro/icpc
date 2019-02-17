#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  CPolygon(){ width=0; height=0; }
  CPolygon(int a,int b) { width=a; height=b; }
  void setValues(int a,int b) { width=a; height=b; }
  virtual int area()=0;
};

class CRectangle: public CPolygon {
public:
  int area() { return (width * height); }
};

class CTriangle: public CPolygon {
public:
  int area() { return (width * height / 2); }
};

int main() {
  CRectangle rect;
  CTriangle trgl;
  CPolygon *ppoly1=&rect, *ppoly2=&trgl;
  ppoly1->setValues(4,5);
  ppoly2->setValues(4,5);
  cout << ppoly1->area() << endl;
  cout << ppoly2->area() << endl;
  return 0;
};
