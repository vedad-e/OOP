#include <iostream>

int main(void)
{
  int k = 4;
  int y = 5;
  auto bar = [=] (double a) mutable {
    k=15;
    y=3;
    return a+k+y;
  };

  auto tar = bar(2);
  std::cout << tar << std::endl;
  std::cout << k << std::endl;
  std::cout << y << std::endl;

  return 0;
}
