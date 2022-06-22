#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct radnik{
  std::string ime;
  double plata;
};

auto lambda = [] (radnik a){a.plata = a.plata + 10; return a;};

void funkcija (std::vector<radnik>& a, std::function<radnik(radnik)> f){

  for(auto& e : a)
    e = f(e);
}

int main(void)
{
  radnik prvi, drugi;
  std::vector<radnik> dnevnik;
  std::cout << "Unesi radnika" << std::endl;
  std::cin >> prvi.ime;
  std::cin >> prvi.plata;
  dnevnik.push_back(prvi);

  std::cout << "Unesi radnika" << std::endl;
  std::cin >> drugi.ime;
  std::cin >> drugi.plata;
  dnevnik.push_back(drugi);


  funkcija (dnevnik, lambda);

  for(auto e : dnevnik)
    std::cout << e.plata << std::endl;


  
  return 0;
}
