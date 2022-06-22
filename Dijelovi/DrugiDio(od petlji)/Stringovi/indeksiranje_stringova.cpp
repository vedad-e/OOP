#include <iostream>

int main(void)
{
  std::string ime = "Srijeda";
  auto a{'a'};
  std::cout << ime.at(a) << std::endl;
  std::cout << ime.size() << std::endl;
  return 0;
}
