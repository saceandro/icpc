#include <iostream>
#include <stdlib.h>
using namespace std;

main(int argc, char* argv[]) {
  string str0 = argv[1];
  string str1 = argv[2];
  int y = atoi(argv[3]);
  cout << "名前: " + str0 << endl;
  cout << "住所: " + str1 << endl;
  cout << "年齢: ";
  cout << y << endl;
}
