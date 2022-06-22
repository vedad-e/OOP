#include <iostream>

int procesiraj (int a){
  return a+2;
}

double procesiraj (int a){
  return a+2;
}

void procesiraj (std::string a){
  std::cout << a << std::endl;
}

int main(void)
{
  procesiraj(2.3);
  return 0;
}
