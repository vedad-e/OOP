#include <iostream>
#include <vector>

void funkcija (int a, int b){
 for( ; a <= b; ++a){
  if(a%3==0)
    std::cout << a << std::endl;
 } 
}


int main(void)
{
  int a,b;
  std::cin >> a;
  std::cin >> b;

  funkcija (a,b);
  return 0;
}
