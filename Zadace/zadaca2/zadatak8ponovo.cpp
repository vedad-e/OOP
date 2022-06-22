#include <iostream>

int main(void)
{
  double broj1, broj2;
  char karakter;
  std::cin >> broj1;
  if(!std::cin){
    std::cout << "Nevalidan unos, uneseni karakter nije broj" << std::endl;
    return 1;
  }
  std::cin >> broj2;
  if(!std::cin){
    std::cout << "Nevalidan unos, uneseni karakter nije broj" << std::endl;
    return 1;
  }
  std::cin >> karakter;

  switch(karakter){
    case '^':
      std::cout << broj1 << std::endl;
      break;
    case '*':
      std::cout << broj1*broj2 << std::endl;
      break;
    case '/':
      if(broj2 != 0.0)
        std::cout << broj1/broj2 << std::endl;
      else
        std::cout << "Dijeljenje sa 0 nije moguce" << std::endl;
      break;
  
  default:
      std::cout << karakter << " nije validan operator" << std::endl;

  }
  return 0;
}
