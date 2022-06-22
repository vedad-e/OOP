#include <iostream>

int povecajZa10(const int& b)
{
  return b;
}

int main(void)
{
  int a=1;
  std::cout << povecajZa10(a) << std::endl;
  a++;
  std::cout << a << std::endl;
  std::cout << povecajZa10(a) << std::endl;
  return 0;
}
