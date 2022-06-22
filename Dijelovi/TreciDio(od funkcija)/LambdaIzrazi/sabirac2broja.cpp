#include<iostream>

int main(void)
{
  auto sabirac = [] (int a, int b){
    return a+b;
  };

  std::cout << sabirac(1,2) << std::endl;
  return 0;
}
