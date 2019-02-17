// pointers to base class
#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  CPolygon() { width=0; height=0; }
  CPolygon(int a,int b) { width=a; height=b; }
  void set_values(int a,int b) { width=a; height=b; }
  int area() { return(0); }
};

class CRectangle: public CPolygon {
public:
  CRectangle(){}
  CRectangle(int a,int b) : CPolygon(a,b){}
  int area() { return (width * height); }
};

class CTriangle: public CPolygon {
public:
  CTriangle(){}
  CTriangle(int a,int b) : CPolygon(a,b){}
  int area() { return (width * height / 2); }
};

int main() {
  CRectangle rect;
  CTriangle trgl;
  CPolygon poly;
  CPolygon * ppoly1 = &rect, * ppoly2 = &trgl, * ppoly3 = &poly;
  ppoly1->set_values(4,5);
  ppoly2->set_values(4,5);
  ppoly3->set_values(4,5);
  cout << ppoly1->area() << endl;
  cout << ppoly2->area() << endl;
  cout << ppoly3->area() << endl;
  cout << rect.area() << endl;
  cout << trgl.area() << endl;
  cout << poly.area() << endl;
  return 0;
}
