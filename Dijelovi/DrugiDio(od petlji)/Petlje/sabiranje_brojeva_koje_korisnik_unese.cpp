#include <iostream>

int main(void)
{
  int unos;
  int suma = 0;
  while(std::cin >> unos)
  {
    suma += unos;
  }
  std::cout << "Prva suma je: " << suma << std::endl;
  
  std::cin.clear();
  suma = 0;

  while(std::cin >> unos)
  {
    suma += unos;
  }
  std::cout << "Druga suma je: " << suma << std::endl;

  return 0;
}
