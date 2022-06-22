#include <iostream>

int procesiraj (int a, int b){
  if(b)
    return a+5;
  else
    return a-5;
}

int main(void)
{
  std::cout << procesiraj (3, false) << std::endl;
  return 0;
}
