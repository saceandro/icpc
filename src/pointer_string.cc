#include <iostream>
using namespace std;

int main() {
  char * terry = "hello";
  
  for (int i=0; i<5; i++) cout << *(terry+i) << " ";
  cout << endl;
  for (int i=0; i<5; i++) cout << terry[i] << " ";
  cout << endl;

  return 0;
}
