#include <iostream>

int a = 5;

int main(void)
{
  int a = 4;
  for(int i=0; i<=10; i++)
  {
    if (i == a)
      continue;
  std::cout << i << std::endl;
  }
return 0;
}
