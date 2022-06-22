#include <iostream>

int main(void)
{
  std::string osoba;
  std::cin >> osoba;

  if (osoba == "student")
  {
    std::cout << "Cao " << osoba << std::endl;
  }
  else if(osoba == "profesor")
  {
    std::cout << "Dobar dan " << osoba << std::endl;
  }
  else
    std::cout << "Mrs" << std::endl;
  return 0;
}
