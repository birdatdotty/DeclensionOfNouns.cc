#include <iostream>

#include "DeclensionOfNouns.h"

using namespace std;

int main()
{
  cout << "Hello, world" << endl;
  
  DeclensionOfNouns *apple = new DeclensionOfNouns("яблока", "яблоко", "яблок");
  cout << "2 " << apple->get(2) << endl;

  return 0;
}
