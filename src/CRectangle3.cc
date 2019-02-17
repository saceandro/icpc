#include <iostream>
using namespace std;

class CRectangle {
  int width, height;
public:
  CRectangle(int, int);
  int area() {return (width*height);}
};

CRectangle::CRectangle(int a, int b) { width=a; height=b;}

int main() {
  int a,b,c,d;
  cin >> a >> b;
  CRectangle rect(a,b);
  cout << "rect area: " << rect.area() << endl;
  cin >> c >> d;
  CRectangle rectb(c,d);
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
