#include <iostream>
using namespace std;

class CRectangle {
  int width, height;
public:
  CRectangle() { width=0; height=0; }
  CRectangle(int a,int b) { width=a; height=b; }
  int area() { return (width * height); }
  friend CRectangle duplicate(CRectangle);
};

CRectangle duplicate(CRectangle rectparam) {
  CRectangle rectres;
  rectres.width = rectparam.width*2;
  rectres.height = rectparam.height*2;
  return (rectres);
}

int main() {
  CRectangle rect(2,3), rectb;
  rectb = duplicate(rect);
  cout << rectb.area() << endl;
  return 0;
}
