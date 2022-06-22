#include <iostream>

int povecajZa10(int& b)
{
  b+=10;
  return b;
}

int main(void)
{
  int a=1;
  std::cout << a << std::endl;
  std::cout << povecajZa10(a) << std::endl;
  std::cout << a << std::endl;
  return 0;
}
