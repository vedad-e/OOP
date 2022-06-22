#include <iostream>
#include <algorithm>

int main(void)
{
  std::string test;
  getline(std::cin, test);

  std::replace(test.begin(), test.end(), ' ', '.');
  std::cout << test << std::endl;
  return 0;
}
