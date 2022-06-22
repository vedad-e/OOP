#include<iostream>

int main(void)
{
  std::string ime, prezime;
  std::cin >> ime;
  std::cout << "Vase ime je " << ime << std::endl;

  std::cin.ignore(260, '\n');

  std::cin >> prezime;
  std::cout << "Vase prezime je " << prezime <<std::endl;



  return 0;
}
