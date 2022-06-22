// *
// **
// ***
// ****
// *****


#include<iostream>


int main(void)
{
  int redovi;

  std::cout << "Unesite broj redova: " << std::endl;
  std::cin >> redovi;

  if (redovi >= 0){
  for(int i=1; i<=redovi; ++i){
    for(int j=1; j<=i; ++j){
      std::cout << "* ";
    }
    std::cout << '\n';
  }
  }
  else
    std::cout << "Nevalidan unos" << std::endl;
  return 0;
}
