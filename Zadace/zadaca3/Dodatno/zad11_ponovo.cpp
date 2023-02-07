#include <iostream>

void faktorijel (int a){
  int fakt = 1;
  for(int i=1; i<=a; ++i){
    fakt*=i;
  }
  std::cout << fakt << std::endl;
}




int main(void)
{
  int a = 3;
  faktorijel (a);
  return 0;
}
