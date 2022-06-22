#include <iostream>

void ispisi (int a)
{
  a = 10;
  std::cout << a << std::endl;
}

int main(void)
{
  int a=1, b=-4;
  ispisi(a);
  std::cout << a << std::endl;
  return 0;
}
