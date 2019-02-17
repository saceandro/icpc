#include <iostream>
using namespace std;

class CVector {
public:
  int x,y;
  CVector() { x=0; y=0; };
  CVector(int a, int b) { x=a; y=b; }
  CVector operator+(CVector param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return (temp);
  }
};

int main() {
  CVector a(3,1);
  CVector b(1,2);
  CVector c(a);
  CVector d;
  cout << c.x << "," << c.y << endl;
  c = a+b;
//c = a.operator+(b); と同じ
  cout << c.x << "," << c.y << endl;
  d = b;
  cout << d.x << "," << d.y << endl;
  return 0;
}
