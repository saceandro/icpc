// dynamic allocation and polymorphism
#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  CPolygon() { width=1; height=2; }
  CPolygon(int a,int b) { width=a; height=b; }
  void setValues(int a,int b) { width=a; height=b; }
  virtual int area()=0;
  void printArea() { cout << this->area() << endl; }
};

class CRectangle : public CPolygon {
public:
  CRectangle(){}
  CRectangle(int a,int b) : CPolygon(a,b) {}
  int area() { return (width * height); }
};

class CTriangle: public CPolygon {
public:
  CTriangle(){}
  CTriangle(int a,int b) : CPolygon(a,b) {}
  int area() { return (width * height / 2); }
};

int main() {
  CPolygon * ppoly1 = new CRectangle(2,3);
  CPolygon * ppoly2 = new CTriangle(2,3);
  /*
  ppoly1->setValues(4,5);
  ppoly2->setValues(4,5);
  */
  ppoly1->printArea();
  ppoly2->printArea();
  delete ppoly1;
  delete ppoly2;
  return 0;
}
