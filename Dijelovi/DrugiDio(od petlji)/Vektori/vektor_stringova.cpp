#include <iostream>
#include <vector>
#include <algorithm>

std::vector <std::string> elementi {"Pingvin", "Lampa"};

int main(void)
{
  elementi.push_back("Vedad");
  elementi.push_back("Eleskovic");
  std::string a;
  a = "Cetvrtak";
  a += "2021";
  elementi.push_back(a);
  elementi[0] = "Makaze";
  for (auto izraz : elementi)
    std::cout << izraz << std::endl;
  std::cout << '\n' << std::endl;
  
  std::sort(std::begin(elementi), std::end(elementi));
  for (auto izraz : elementi)
    std::cout << izraz << std::endl;
  return 0;
}
