#include <iostream>

namespace moj{
  std::string a{"provjera"};
}

namespace tvoj{
  std::string a = "test";
}

std::string a = "armine";

int main(void)
{
  a.at(0) = 'E';
  tvoj::a+="1";
  a.push_back('a');
  moj::a = "vjerapro";

  std::cout << ::a+a+tvoj::a+moj::a << std::endl;
  
  return 0;
}
