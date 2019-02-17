#include <iostream>
using namespace std;

int main() {
  int firstvalue, secondvalue;
  int * mypointer;
  
  mypointer = &firstvalue;
  cout << "address of firstvalue is " << mypointer << endl;
  *mypointer = 10;
  cout << "firstvalue is " << firstvalue << endl;

  mypointer = &secondvalue;
  cout << "address of secondvalue is " << mypointer << endl;
  *mypointer = 20;
  cout << "secondvalue is " << secondvalue << endl;
  return 0;
}
