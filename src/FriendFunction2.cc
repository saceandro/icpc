#include <iostream>
using namespace std;

class CRectangle {
  int width, height;
public:
  CRectangle() { width=0; height=0; }
  CRectangle(int a,int b) { width=a; height=b; }
  int area() { return (width * height); }
  CRectangle duplicate() {
    CRectangle rectres;
    rectres.width = width*2;
    rectres.height = height*2;
    return rectres;
  }
};

int main() {
  CRectangle rect(2,3), rectb;
  rectb = rect.duplicate();
  cout << rectb.area() << endl;
  return 0;
}
