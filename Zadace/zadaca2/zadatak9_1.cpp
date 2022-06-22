// *****
// ****
// ***
// **
// *


#include <iostream>

int main(void)
{
  int redovi;
  std::cin >> redovi;

  for(int i=redovi; i>=1; i--){
    for(int j=1; j<=i; j++){
      std::cout << "* ";
    }
    std::cout << '\n';
  }

  return 0;
}
