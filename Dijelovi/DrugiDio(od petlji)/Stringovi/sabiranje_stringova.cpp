#include <iostream>

int main(void)
{
  auto d{'M'};
  std::string a="1", b="2" , c=a+b; 
  std::cout << c+a+d << std::endl;
  return 0;
}
