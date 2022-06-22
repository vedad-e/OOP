#include <iostream>

typedef int cijeli_br;

int main(void)
{
  cijeli_br a = 3;
  double b = 5.5;

  decltype(a) c = b;
  
  std::cout << c << std::endl;
  std::cout << sizeof(c) << std::endl;
  return 0;
}
