#include <iostream>
#include <vector>

struct knjiga{
  std::string autor;
  std::string naslov;
};

void funkcija(std::vector<knjiga>& jedan, knjiga& prva){
  std::cout << "Unesi autora i naslov" << std::endl;
  std::cin >> prva.autor;
  std::cin >> prva.naslov;

  jedan.push_back(prva);
  
}

int main(void)
{
  knjiga prva, druga;
  std::vector<knjiga> polica;
  funkcija(polica, prva);
  funkcija(polica, druga);

  for(int i=0; i<polica.size(); ++i){
    std::cout << polica[i].autor << std::endl;
  }

  return 0;
}
