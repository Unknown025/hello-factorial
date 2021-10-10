/**
 * test functions for factorial
 **/

#include "factorial.h"
#include <cassert>
#include <iostream>

using namespace std;

void test01() {
  assert(fact(1) == 1);
  assert(fact(3) == 6);
  assert(fact(31) == -1);
}

void test02() {
  assert(fact(-1) == 1);
  assert(fact(5) == 120);
}

int main() {
  test01();
  test02();
  memoryLeakFunction();
  unusedFunction();

  cout << "Done." << endl;
  return 0;
}
