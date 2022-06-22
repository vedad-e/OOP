#include <iostream>

namespace moj{
  int a=10;
}

namespace tvoj{
  char a=15;
}

double a{'a'};

int main()
{
 // int b = 'a';
  a = ::a + moj::a + tvoj::a;
  std::cout << a << std::endl;
  std::cout << sizeof(a) << std::endl;
  
  return 0;
}
