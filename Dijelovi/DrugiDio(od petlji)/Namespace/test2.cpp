#include <iostream>

namespace prvi{
  int a=15;
}

namespace drugi{
  double a=10;
}

int a{2};

int main(void)
{
  int a=1;
  a = a + prvi::a + drugi::a;
  std::cout << a << std::endl;
  return 0;
}
