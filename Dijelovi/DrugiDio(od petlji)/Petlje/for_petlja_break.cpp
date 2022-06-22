#include <iostream>

int a = 5;

int main(void)
{
  int a = 4;
  for(int i=0; i<=10; i++)
  {
    std::cout << i << " ";
    if (i == a)
    break;
  }
  return 0;
}
