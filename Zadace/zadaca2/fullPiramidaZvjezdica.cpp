#include <iostream>

int main(void)
{
  int a,b;
  std::cin >> b;

  for(int i=1, j=0; i<=b; ++i, j=0){
    for(a=1; a<=b-i; ++a){
      std::cout << "  ";
    }
    while(j!=2*i-1){
      std::cout << "* ";
      ++j;
    }
    std::cout << std::endl;
  }
  return 0;
}
