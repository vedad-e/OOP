#include <iostream>

int a = 100;

typedef decltype (a) cijeli_broj;

int main(void)
{
  const cijeli_broj d = 1;
  decltype(d) b;
  std::cout << b << std::endl;
  return 0;
}
// Ne mozemo u decltype staviti neku
// varijablu koja je konstantna
