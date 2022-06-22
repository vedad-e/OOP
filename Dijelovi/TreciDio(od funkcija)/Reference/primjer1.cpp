#include <iostream>

int main(void)
{
  int a = 5;
  const int& b = a;
  a = 7;
  std::cout << b << std::endl;
  return 0;
}
