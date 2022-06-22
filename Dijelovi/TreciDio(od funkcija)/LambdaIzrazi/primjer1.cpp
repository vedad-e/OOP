#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int a = 10;
  int b = 5;
  auto f = [&a] (int c, int d){
    return a = c-d;
  };

  std::cout << f(a,b) << std::endl;
  std::cout << a << std::endl;
  return 0;
}
