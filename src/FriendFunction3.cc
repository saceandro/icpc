#include <iostream>
using namespace std;

class CRectangle {
  int width, height;
public:
  CRectangle() { width=0; height=0; }
  CRectangle(int a,int b) { width=a; height=b; }
  int area() { return (width * height); }
  void duplicate() {
    width=width*2;
    height=height*2;
  }
};

int main() {
  CRectangle rect(2,3);
  rect.duplicate();
  cout << rect.area() << endl;
  return 0;
}
