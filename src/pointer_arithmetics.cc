#include <iostream>
using namespace std;

int main() {
  char a = 'a';
  short b = 'b';
  long c = 'c';
  
  char *mychar = &a;
  short *myshort = &b;
  long *mylong = &c;
  
  cout << mychar << " " << myshort << " " << mylong << endl;
  
  mychar++;
  myshort++;
  mylong++;
  cout << mychar << " " << myshort << " " << mylong << endl;
  
  mychar = mychar+1;
  myshort = myshort+1;
  mylong = mylong+1;
  cout << mychar << " " << myshort << " " << mylong << endl;
}
