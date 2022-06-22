#include <iostream>

int main(){
  std::string ime;
  std::cout << "Unesite ime:" << std::endl;
  std::cin >> ime;

  std::string c = "*Pozdrav, "+ime+"*";
  std::string a(c.size(), '*');
  std::string b(c.size()-2, ' ');
  std::string d="*"+b+"*";

  std::cout << a << std::endl;
  std::cout << d << std::endl;
  std::cout << c << std::endl;
  std::cout << d << std::endl;
  std::cout << a << std::endl;


  return 0;
}
