#include <iostream>

int main(void)
{
  std::string ImeiPrezime, dan;

  std::cout << "Unesite Vase ime i prezime" << std::endl;
  getline(std::cin, ImeiPrezime);
  std::cout << "Pozdrav " << ImeiPrezime << std::endl;

  std::cout << "Koji je danas dan?" << std::endl;
  std::cin >> dan;
  std::cout << "Danas je " << dan << std::endl;


  return 0;
}
