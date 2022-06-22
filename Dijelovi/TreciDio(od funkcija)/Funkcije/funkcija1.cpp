#include <iostream>

int sabirac (int a, int b)
{
  a = 0;
  int c = a + b;
  return c;
}

int main(void)
{
  int a=1, b=-4;
  std::cout << sabirac(a,b) << std::endl;
  std::cout << a << std::endl;
  return 0;
}
